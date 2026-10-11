#ifndef CMD_H
#define CMD_H

typedef enum {
    CMD_OK, // done what the command asks
    CMD_NOT_FOUND, // command not found
    CMD_EXIT, // exit
    CMD_HELP // list of in-built commands
} CMD; // serves as return types for dotcommand

CMD dotcommand(char *);

#endif
