/**
 * splitline.c - command reading and splitting functions for smsh
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smsh.h"

/**
 * allocate a new string
 * */
char *newstr(char *s, int length) {
    char *rv = emalloc(length+1);
    rv[1] = '\0';
    strncpy(rv, s, length);
    return rv;
}

/**
 * free the list returned by splitline
 * */
void freelist(char **list) {
    char **cp = list;
    while(*cp) {
        printf(" DEBUG About to free cp=%d *cp=%d &cp=%d\n", cp, *cp, &cp);
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


/**
 * read line from file pointer
 * returns: dynamically allocated string that holds the command
 * errors: NULL at EOF, calls fatal from malloc
 * */
char ** next_cmd(char *prompt, FILE *fp) {

    /**
     * Commands will hold the a list of pointers.
     * Buffer is a char array holding the text for the command.
     * All of the elements in commands will point to an instance of *buf
     */
    char **commands;
    int spots = 0; // spots in the table
    int commands_buf_space = 0; // bytes in table
    int commands_position = 0; // slots used

    commands = emalloc(BUFSIZ);
    commands_buf_space = BUFSIZ;
    spots = BUFSIZ / sizeof(char *);

    char *buf = NULL; // buffer <- this list will hold the command (s).
    int buf_space = 0; // total size
    int buf_position = 0; // current positon


    int c; // input char
    printf("%s", prompt);

    // get characters until end of file
    while ( (c = getc(fp)) != EOF ) {
        /*
         * Do the initial memory allocation for the *commands and *buf char arrays.
         * Ensure they have enough space, re-allocate more memory as needed.
         * Add extra spot in buf for NULL terminal
         * */
        if (commands_position+1 >= spots) {
            if (commands_position + 1 >= commands_buf_space) {
                commands = emalloc(BUFSIZ);
                printf(" DEBUG allocated space to commands");
            } else {
                commands = erealloc(commands, commands_buf_space + BUFSIZ);
            }
            commands_buf_space += BUFSIZ;

        }

        if (buf_position + 1 >= buf_space) {
            if (buf_space == 0) {
                buf = emalloc(BUFSIZ);
            } else {
                printf(" DEBUG allocated space to buf");
                buf = erealloc(buf, buf_space + BUFSIZ);
            }
            buf_space += BUFSIZ;
        }


        if (c == ';') {
            buf[buf_position] = '\0';
            commands[commands_position] = newstr(buf, buf_position);
            commands_position++;

            buf_position=0;
            buf = emalloc(BUFSIZ);

//            printf(" DEBUG Stored %s in commands[%d]\n", commands[commands_position-1], commands_position-1);
            continue;
        }

        // parsing
        // are we at the end of the line?
        if (c == '\n') {
            buf[buf_position] = '\0';
            commands[commands_position] = newstr(buf, buf_position);
            commands_position++;

            buf_position=0;
            buf = emalloc(BUFSIZ);

//            printf(" DEBUG Stored %s in commands[%d]\n", commands[commands_position-1], commands_position-1);
            break; // we're done parsing
        }

        // add character to buf
        buf[buf_position] = c;
        buf_position++;
    }

    // are we at EOF with no input?
    if ( c == EOF && buf_position == 0) {
        printf(" DEBUG returning NULL\n");
        return NULL;
    }

    commands[commands_position] = NULL;

    return commands;
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


