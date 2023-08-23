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
	int i,t;
	int j = n - 1;

	for (i = 0; i < n && a[i] != '\0'; i++)
	{
		for (j >= 0; j --)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
	
		}
	}
}
