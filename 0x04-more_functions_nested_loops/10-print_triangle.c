#include "main.h"
/**
 *print_triangle - print triangle
 *@size: input
 *
 */
void print_triangle(int size)
{
	int l, w;
	
	if (size == 0)
		_putchar('\n');
	for (l = 1; l <= size; l++)
	{
		for (w = 1; w <= l; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
