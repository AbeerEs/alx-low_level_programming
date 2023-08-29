#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: pointer to result
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && needle[j] != '\0')
			{
				p = &haystack[i];
				return (p);
			}
		}
	}
	return ('\0');
}
