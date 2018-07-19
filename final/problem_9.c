/**
 * Zahid Mahir
 * Start 2 child processes
 * */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    for (int i = 1; i < 3; i++) {

        int pid = fork();
        if (pid > 0) {
//             printf("I'm a parent\n");
        } else if (pid == 0) { // child
            printf("I'm child %d\n", i);
            break;
        } else {
            printf("fork error\n");
            exit(1);
        }
    }

    return 0;
}
