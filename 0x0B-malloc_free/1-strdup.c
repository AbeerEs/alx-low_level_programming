#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup -  returns a pointer to a newly allocated space in memory
 *@str: input parameter
 *Return: pointer to answer
 *
 */
char *_strdup(char *str)
{
	char *m;
	int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = str[i];

	return (m);
}
