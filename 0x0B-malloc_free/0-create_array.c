#include "main.h"
#include <stdlib.h>
/**
 **create_array - creates an array of chars
 *@size: input parameter
 *@c: input parameter
 *Return: pointer to answer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n = malloc(size);

	if (n == 0 || size == 0)
		return (0);

	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
