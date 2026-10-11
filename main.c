#define _GNU_SOURCE

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "command.h"

#define SIZE 1024

void strip_whitespacec(char *, int);
void print_prompt() {
    printf("$ ");
}


int main(void) {
    size_t size;
    __ssize_t lineRead = 0;
    char *buffer = NULL;

    int exit = 0;
    
    while(exit == 0) {
        print_prompt();

        lineRead = getline(&buffer, &size, stdin);
        if(lineRead == -1) continue;

        strip_whitespacec(buffer, (int)lineRead);
        if(buffer[0] == '.') {
            CMD return_value = dotcommand(buffer+1);
            switch (return_value) {
                case CMD_EXIT: {
                    exit = 1;
                    break;
                }
                case CMD_NOT_FOUND: {
                    printf("Error: unknown command or invalid arguments:  \"%s\". Enter \".help\" for help\n", buffer+1);
                    break;
                }
                default: continue;
            }
        }
    }
    free(buffer);
    return 0;
}

void strip_whitespacec(char *input, int len) {
    input[--len] = '\0'; // change the last element from \n to null byte
}
