#include "dragon.h"
#include <sys/types.h>
#include <sys/wait.h>

void ex_command(const char *command)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        /* Oh no, there was an error forkin' the process! */
        Drag_Print("Error forkin' process.\n");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        /* Yeehaw, we in the Child process now! */
        char *args[130];
        int arg_count = 0;

        /* Let's wrangle them tokens into arguments */
        char *token = strtok((char *)command, " ");
        while (token != NULL)
        {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;

        /* Time to execute that command, partner! */
        execvp(args[0], args);

        /* Aw shucks, there was an error with the command */
        Drag_Print("Error command.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        /* Back to the Main process we go */
        wait(NULL);
    }
}
