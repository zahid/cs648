/**
 * Zahid Mahir
 * Reverse a string without using builtin string library
 * */
#include <stdlib.h>
#include <stdio.h>

int get_string_length(char *word) {
    int length = 0;

    while (word[length] != '\0') {
        length++;
    }

    return length;
}

char * reverse_string(char *word) {
    int length = get_string_length(word);
    char *reversed_string = malloc(length+1);

    int end = length - 1;
    reversed_string[end] = '\0';

    for(int i = 0; i < length; i++) {
        reversed_string[i] = word[end];
        end--;
    }

    return reversed_string;
}

int main() {
    char test[] = "bats in the cave!";
    char *reversed = reverse_string(test);
    printf("%s\n", reversed);

    return 0;
}
