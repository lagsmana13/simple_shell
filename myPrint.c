#include "dragon.h"
/**
* Prints the given message to the standard output.
*
* @param mesg The message to print.
*/
void Drag_Print(const char *mesg)
{
/* Let's wrangle them words and print 'em out */
write(STDOUT_FILENO, mesg, strlen(mesg));
}
