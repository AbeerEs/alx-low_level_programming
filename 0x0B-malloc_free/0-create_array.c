#include "main.h"
/**
 **create_array - creates an array of chars
 *@size: input parameter
 *@c: input parameter
 *Return: pointer to answer
 */
char *create_array(unsigned int size, char c);
{
	int i;
	char *n = malloc(size);

	if (n == NULL)
		return (0);
	else
	{
		for (i = 0; i < size; i++)
			n[i] = c;
	}
	return (n);
}
