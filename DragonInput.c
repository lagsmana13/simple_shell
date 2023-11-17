File Edit Options Buffers Tools C Help
#include "dragon.h"

void re_command(char *command, size_t size)
{
/* Read command from user input using fgets */
if (fgets(command, size, stdin) == NULL)
{
/* Check if end-of-file was reached */
if (feof(stdin))
{
/* Print newline and exit successfully */
Drag_Print("\n");
exit(EXIT_SUCCESS);
}
else
{
/* Print error message and exit with failure */
Drag_Print("Input reading error.\n");
exit(EXIT_FAILURE);
}
}
/* Remove trailing newline character */
command[strcspn(command, "\n")] = '\0';
}
