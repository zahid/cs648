/**
 * Chanpter 8 - question 8.4
 */

#include <stdio.h>
#include <stdlib.h>

#define DELAY 5

int main() {
    int fd;
    int pid;
    char msg1[] = "Testing 1 2 3 ...\n";
    char msg2[] = "Hello ...\n";

    if ( (fd = creat("testfile", 0644)) == 1) {
        return 0;
    }
    printf("Created testfile\n");

    printf("About to write msg1\n");
    if ( write(fd, msg1, strlen(msg1)) == -1) {
        printf("Error writing msg1\n");
        return 0;
    }
    printf("wrote -> msg1\n");

    printf("about to fork!\n");
    if ( (pid = fork()) == -1 ) {
        printf("error forking\n");
        return 0;
    }

    printf("about to write msg2\n");
    if ( write(fd, msg2, strlen(msg2)) == -1) {
        printf("error writing msg2\n");
        return 0;
    }

    printf("wrote -> msg2\n");
    
    close(fd);
    printf("closed fd\n");
    return 1;

}

