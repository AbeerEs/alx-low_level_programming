#include "function_pointers.h"
/**
 *int_index - Write a function that searches for an integer
 *@array: input parameter
 *@size: input parameter
 *@cmp: input parameter
 *Return: index parameter
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
