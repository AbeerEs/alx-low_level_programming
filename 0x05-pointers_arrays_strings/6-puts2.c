#include "main.h"
/**
 *puts2 - print even numbers
 *@str: input parameter
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('/n');
}
