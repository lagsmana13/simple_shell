#ifndef DRAGON_H
#define DRAGON_H

#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Read a command from the user
 * 
 * @param command: the buffer to store the command
 * @param size: the size of the buffer
 */
void re_command(char *command, size_t size);

/**
 * Execute the given command
 * 
 * @param command: the command to execute
 */
void ex_command(const char *command);

/**
 * Display the prompt symbol
 */
void ShowPrompt(void);

/**
 * Print a message using the dragon printer
 * 
 * @param mesg: the message to print
 */
void Drag_Print(const char *mesg);

#endif /* DRAGON_H */
