#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: input parameter
 *@b: input parameter
 *Return: nothung
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
