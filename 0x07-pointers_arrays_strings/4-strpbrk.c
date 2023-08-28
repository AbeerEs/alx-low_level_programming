#include "main.h"
/**
 * *_strpbrk -  searches a string for any of a set of byte
 * @s: input parameter
 * @accept: input parameter
 * Return: pointer to result
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}

	}
	return ('\0');
}
