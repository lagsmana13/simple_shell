#ifndef DRAGON_H
#define DRAGON_H

#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * Read a command from the user.
 * @param command The buffer to store the command.
 * @param size The size of the buffer.
 */
void re_command(char *command, size_t size);

/**
 * Execute the given command.
 * @param command The command to execute.
 */
void ex_command(const char *command);

/**
 * Display the prompt symbol.
 */
void ShowPrompt(void);

/**
 * Print a message using the dragon printer.
 * @param mesg The message to print.
 */
void Drag_Print(const char *mesg);

/**
 * Handle exit command.
 */
void handle_exit_command(void);

#endif /* DRAGON_H */
