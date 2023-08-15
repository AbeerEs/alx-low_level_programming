#include "main.h"
#include <unistd.h>
/**
* _putchar - write char c to stdout
* @c: the char to print
*description creating putchar
*Return: (1) on success
*on error (-1)
*
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
