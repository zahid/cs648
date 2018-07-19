/**
 * execute.c - execute a command
 * */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

/**
 * purpose is to run a program
 * returns: the status code returned by wait, or -1 if there was an error
 * */
int execute(char *argv[]) {
    int pid;
    int child_info = -1;

    if (argv[0] == NULL) {
        printf("argv[0] is NULL!\n");
        return 0;
    }
    if ( (pid = fork()) == -1 ) {
        perror("fork error!\n");
    } else if (pid == 0) {
        signal(SIGINT, SIG_DFL);
        signal(SIGQUIT, SIG_DFL);
        execvp(argv[0], argv);
        perror("Cant execute command!");
        exit(1);
    } else {
        if ( wait(&child_info) == -1 ) {
            perror("wait error!");
        }
    }
    return child_info;
}
