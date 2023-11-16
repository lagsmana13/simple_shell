#include "dragon.h"

void Drag_Print(const char *mesg)
{
/* Let's wrangle them words and print 'em out */
write(STDOUT_FILENO, mesg, strlen(mesg));
}
