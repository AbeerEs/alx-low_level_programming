#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *strsize - get size
 * @s: input parame
 * Return: int
 */
int strsize(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 **str_concat - concatenates two strings
 *@s1: input parameter
 *@s2: input parameter
 **strsize - get size
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int size1, size2, i;

	size1 = strsize(s1);
	size2 = strsize(s2);
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	con = malloc((size1 + size2) * sizeof(char) + 1);
	if (con == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			con[i] = s1[i];
		else
			con[i] = s2[i - size1];
	}
	con[i] = '\0';
	return (con);
}
