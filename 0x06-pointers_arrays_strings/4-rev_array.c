#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: input parameter
 *@n: input parameter
 *Return: Nothing
 *
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n - 1 ; i++)
	{
			t = a[i];
			a[i] = a[n];
			a[n] = t;
	}
}
