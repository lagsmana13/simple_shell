#include "dragon.h"

/**
* main - Program Entry point
* This function is program entry point of the program,
* reads a command, and executes the command until enters
* the "exit" command, at which point the program
*
* Return: 0 on successful execution
*/
int main(void)
{
	char command[130];

	while (1)
	{
		/* Display the prompt */
		ShowPrompt();

		/* Read a command from the user */
		re_command(command, sizeof(command));

		/* Check if the command is "exit" */
		if (strcmp(command, "exit") == 0)
		{
			Drag_Print("Goodbye, partner!\n");
			break; /* Exit the loop and end the program */
		}
		else
		{
			/* Execute the command */
			ex_command(command);
		}
	}

	return (0);
}
