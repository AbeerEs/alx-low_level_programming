#include "main.h"
/**
 **leet - Write a function that encodes a string into 1337
 *@s: input parameter
 *Return: pointer to result
 *
 */
char *leet(char *s)
{
	char s1[] = "AaEeOoTtLl";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s1[j] == s[i])
				s[i] = s2[j];
		}
	}
	return (s);
}
