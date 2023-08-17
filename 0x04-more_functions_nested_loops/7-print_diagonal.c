#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: input
 */
void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space <= n; space++)
			{
				if (pos == space)
					_putchar(92);
				else if (space < pos)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
