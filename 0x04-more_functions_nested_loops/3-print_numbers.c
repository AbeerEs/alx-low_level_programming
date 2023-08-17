#include "main.h"

/**
 *print_numbers - print numbers
 *Return: always 0 (succecc)
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
