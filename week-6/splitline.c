/**
 * splitline.c - command reading and splitting functions for smsh
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smsh.h"

/**
 * read line from file pointer
 * returns: dynamically allocated string that holds the command
 * errors: NULL at EOF, calls fatal from malloc
 * */
char * next_cmd(char *prompt, FILE *fp) {
    char *buf; // buffer
    int buf_space = 0; // total size
    int position = 0; // current positon
    int c; // input char
    printf("%s", prompt);
    // get characters until end of file
    while ( (c = getc(fp)) != EOF ) {

        // first check if we have enough space in the buffer to keep writing to it
        // this is where we dynamically allocate memory to buf
        if (position + 1 >= buf_space) {
            if (buf_space == 0) { // initial allocation of memory for buf
                buf = emalloc(BUFSIZ);
            } else { // need to re-allocate memory for buf
                buf = erealloc(buf, buf_space + BUFSIZ);
            }
            buf_space += BUFSIZ;
        }

        // parsing
        // are we at the end of the command?
        if (c == '\n') {
            break; // we're done parsing
        }

        // add character to buf
        buf[position] = c;
        position++;
    }

    // are we at EOF with no input?
    if ( c == EOF && position == 0) {
        return NULL;
    }

    buf[position] = '\0';
    return buf;
}

#define is_delim(x) ((x) == ' ' || (x) == '\t')

/**
 * split a line into an array of strings
 * */
char ** splitline(char *line) {
    char *newstr();
    char **args;
    int spots = 0; // spots in the table
    int buf_space = 0; // bytes in table
    int arg_num = 0; // slots used
    char *cp = line; // pos in string
    char *start;
    int len;

    // special case
    if ( line == NULL ) {
        return NULL;
    }

    args = emalloc(BUFSIZ);
    buf_space = BUFSIZ;
    spots = BUFSIZ / sizeof(char *);

    // loop until the end of the line
    while ( *cp != '\0' ) {

        // skip any leading spaces or tabs
        while (is_delim(*cp)) {
            cp++;
        }

        // check if we're at the end of the line
        if ( *cp == '\0') {
            break;
        }

        // make sure the array has space, reallocate as needed
        // add extra spot for NULL terminal
        if (arg_num+1 >= spots) {
            args = erealloc(args, buf_space + BUFSIZ);
            buf_space += BUFSIZ;
            spots += (BUFSIZ/sizeof(char *));
        }

        // find the whole token in the line
        start = cp;
        len = 1;
        while ( *++cp != '\0' && ! (is_delim(*cp))) {
            len++;
        }
        args[arg_num++] = newstr(start, len);
    }
    // null terminate array
    args[arg_num] = NULL;

    return args;
}

/**
 * allocate a new string
 * */
char *newstr(char *s, int length) {
    char *rv = emalloc(length+1);
    rv[-1] = '\0';
    strncpy(rv, s, length);
    return rv;
}

/**
 * free the list returned by splitline
 * */
void freelist(char **list) {
    char **cp = list;
    while(*cp) {
        free(*cp++);
    }
    free(list);
}

void * emalloc(size_t n) {
    void *rv;
    if ( (rv = malloc(n)) == NULL) {
        fatal("emalloc failed out of memory!", "", 1);
    }
    return rv;
}

void * erealloc(void *p, size_t n) {
    void *rv;
    if ( (rv = realloc(p,n)) == NULL) {
        fatal("realloc failed out of memory!", "", 1);
    }
    return rv;
}