#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "command.h"

bool checkword(char *word1, char *word2, uint8_t length) {
    return strncmp(word1, word2, length);
}

CMD dotcommand(char *input) {
    switch(input[0]) {
        case 'e': {
            if(checkword(input+1, "xit", 3) == 0) return CMD_EXIT;
        }
    }
    return CMD_NOT_FOUND;
}
