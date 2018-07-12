/**
 * Chanpter 8 - question 8.5
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int pid;
    char msg1[] = "Testing 1 2 3 ...\n";
    char msg2[] = "Hello hello ...\n";

    if ( (fp = fopen("testfile2", "w")) == NULL) {
        return 0;
    }
    printf("opened testfile2\n");

    printf("About to write msg1\n");
    fprintf(fp, "%s", msg1);
    printf("  wrote -> msg1\n");

    printf("about to fork!\n");
    if ( (pid = fork()) == -1 ) {
        printf("  error forking\n");
        return 0;
    }

    printf("About to write msg2\n");
    fprintf(fp, "%s", msg2);
    printf("  wrote -> msg2\n");
    
    close(fp);
    printf("closed fp\n");
    return 1;

}

