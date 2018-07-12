/*
 * signal demo 2
 * this explains how a signal handler works
 * 
 * Changelog:
 * zahid - july 6 2017 Add in ability to set MAX_INTERRUPTS and add "!" to "ouch" display.
 */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int incoming_signal_counter = 0;
int max_interrupts = 0;

void f(int);

/*
 * @param ac - argument count
 * @param *av[] - argument vector
 * */
int main(int ac, char *av[]) {

    // usage message
    if (ac < 2) {
        printf("usage: main MAX_INTERRUPTS\n");
        printf("where MAX_INTERRUPTS is the number of times to handle an interrupt before exiting.\n\n");
        exit(1);
    }

    max_interrupts = atoi(av[1]);

    /* Handle signal here */
    signal(SIGINT, f);
    
    /* The program will be limited to 10 for loop iterations, since i=10. */
    for(int i = 0; i < 10; i++)
    {
        printf("Hello\n");
        sleep(1);
    }

    return 0;
}

/*
 * f() handles a signal interrupt.
 * @param signum - the signal to handle
 * @max_interrupts - max number of interrupts to handle before exiting
 * */
void f(int signum)
{
    incoming_signal_counter++;

    if (incoming_signal_counter == max_interrupts) {
        exit(0);
    }

    printf("Ouch");

    for(int i = 0; i < incoming_signal_counter; i++)
    {
        printf("!");
    }
    printf("\n");
}
