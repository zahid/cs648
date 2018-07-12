/**
 * Chapter 8 problem 8.8 - wait for multiple children
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int ac, char *av[]) {
    
    // usage message
    if (ac < 2) {
        printf("usage: main NUM_CHILDREN\n");
        printf("where NUM_CHILDREN is the number of children to spawn.\n\n");
        exit(1);
    }

    int num_children = atoi(av[1]);

    int newpid;
    void child_code(), parent_code();
    printf("Before: mypid is %d\n", getpid());
    
    for(int i = 0; i < num_children; i++) {
        printf("About to fork!\n");
        newpid = fork();    
        if ( newpid == -1 ) {
            perror("fork");
        } else if ( newpid == 0 ) {
            // seed rand genenerator 
            srand ( time(NULL) );
            int delay = rand()%10+1;
            
            child_code(delay);
        } else {
            parent_code(newpid);
        }
    }
}

/**
 * new process takes a nap and then exits
 */
void child_code(int delay) {
    printf(" child %d here. will sleep for %d seconds\n", getpid(), delay);
    sleep(delay);
    printf(" child is done, about to exit\n");
    exit(17);
}

/**
 * Parent waits for child then prints a message
 */
void parent_code(int childpid) {
    int wait_rv;
    wait_rv = wait(NULL);
    printf(" done waiting for %d, wait returned %d\n", childpid, wait_rv);
}
