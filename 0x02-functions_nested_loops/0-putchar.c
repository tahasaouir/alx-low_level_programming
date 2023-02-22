#include "main.h"
#include<unistd.h>
/**
*_putchar - writes the character c to stdout
*@c: The charcter to print
*
*Return:On Success 1.
*On error, -1 returned, errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
