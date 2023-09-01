#include "main.h"
/**
 *print_triangle - print triangle
 *@size: input
 *
 */
void print_triangle(int size)
{
	int l, w;

	int s;

	if (size == 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size - l; s > 0; s--)
			{
				_putchar(' ');
			}
			for (w = 1; w <= l; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
