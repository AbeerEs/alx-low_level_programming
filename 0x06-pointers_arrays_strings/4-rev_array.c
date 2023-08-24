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
	int i = 0;
	int t;

	while (i < n--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}
