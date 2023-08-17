#include "main.h"
/**
 *more_numbers - print numbers ten times
 *
 *Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, j, count;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			count = j;
			if (count > 9)
			{
				_putchar(1 + 48);
				count = j % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
