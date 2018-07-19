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

void setup() {
    signal(SIGINT, SIG_IGN);
    signal(SIGQUIT, SIG_IGN);
}

int main() {
//    char *cmd_lines, *prompt, **arg_list;
    char **cmd_lines;
    char *prompt, **arg_list;

    int result;
    void setup();

    prompt = DFL_PROMPT;
    setup();

    // does this need to be dynamic?
    // problem 9.4: update next_cmd to return a list of lists full of commands

    while( (cmd_lines = next_cmd(prompt, stdin)) != NULL ) {

        int command_ptr = 0;

        while (cmd_lines[command_ptr] != NULL) {
//            printf(" DEBUG command is: %s\n", cmd_lines[command_ptr]);

            if( (arg_list = splitline(cmd_lines[command_ptr])) != NULL) {
//                printf(" DEBUG about to execute: `%s`\n", arg_list[0]);
                result = execute(arg_list);
                printf("\n");
            }

            command_ptr++;
        }
        freelist(cmd_lines[command_ptr]); // free the list

    }
    return 0;
}

/**
 * Exit with code n
 * and print message s1 and s2 to stderr
 * */

void fatal(char *s1, char *s2, int n) {
    fprintf(stderr, "Error: %s %s\n", s1, s2);
    exit(n);
}

