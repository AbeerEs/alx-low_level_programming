#include "main.h"

/**
 *print_most_numbers - print numbers
 *Return: always 0 (succecc)
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
