#include "dragon.h"

/*
 * Main role: Entry point of the program
 */
int main(void) {
    char command[130];

    while (1) {
        /* Display the prompt */
        ShowPrompt();

        /* Read a command from the user */
        re_command(command, sizeof(command));

        /* Check if the command is "exit" */
        if (strcmp(command, "exit") == 0) {
            Drag_Print("Goodbye, partner!\n");
            break; /*Exit the loop and end the program*/
        } else {
            /* Execute the command */
            ex_command(command);
        }
    }

    return 0;
}
