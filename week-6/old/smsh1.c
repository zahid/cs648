/**
 * smsh1.c - small shell
 * shell prompts user for input line to execute.
 * parses command into string tokens
 * uses exec, wait, fork, and will ignore signals
 * **/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "smsh.h"

#define DFL_PROMPT "> "

int main() {
    char *cmd_line, *prompt, **arg_list;
    int result;
    void setup();

    prompt = DFL_PROMPT;
    setup();

    // while we get another line of input from user
    while( (cmd_line = next_cmd(prompt, stdin)) != NULL ) {
        printf("Got command: %s\n", cmd_line);
        if( (arg_list = splitline(cmd_line)) != NULL) {
            result = execute(arg_list);
            printf("Got result: %d\n", result);
            freelist(arg_list);
        }
        freelist(&cmd_line);
    }
    return 0;
}

void setup() {
    signal(SIGINT, SIG_IGN);
    signal(SIGQUIT, SIG_IGN);
}

/**
 * Exit with code n
 * and print message s1 and s2 to stderr
 * */

void fatal(char *s1, char *s2, int n) {
    fprintf(stderr, "Error: %s %s\n", s1, s2);
    exit(n);
}