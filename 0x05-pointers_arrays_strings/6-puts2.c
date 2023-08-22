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
	int counter = 0;

	while (str[counter] != 0)
		counter++;

	for (i = 0; str[counter] != '\n'; i++)
	{
		if (counter % 2 == 0)
			_putchar(str[counter]);
	}
	_putchar('\n');
}
