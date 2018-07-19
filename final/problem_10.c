/**
 * Zahid Mahir
 * Run a command
 * */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    char* argv[3];

    argv[0] = malloc(32); //input_command;
    argv[1] = malloc(32); //input_arguments;
    argv[2] = NULL;

    printf("Enter a command:\n");
    fgets(argv[0], 32, stdin);
    printf("Enter arguments:\n");
    fgets(argv[1], 32, stdin);
    // remove newline at end of input
    char *pos;
    if ((pos=strchr(argv[0], '\n')) != NULL)
        *pos = '\0';

    char *pos2;
    if ((pos2=strchr(argv[1], '\n')) != NULL)
        *pos2 = '\0';

    printf("argv[0]=|%s|\n",argv[0]);
    printf("argv[1]=|%s|\n",argv[1]);

    int result = execute(argv);

    printf("Got result: %d\n", result);
    free(argv[0]);
    free(argv[1]);
    free(argv[2]);
}

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
        perror("Cant execute command\n");
        exit(1);
    } else {
        if ( wait(&child_info) == -1 ) {
            perror("wait error!\n");
        }
    }
    return child_info;
}
