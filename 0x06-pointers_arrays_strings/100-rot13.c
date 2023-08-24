#include "main.h"
/**
 **rot13 - function that encodes a string using rot13.
 *@s: input parameter
 *Return: pointer to result
 *
 */
char *rot13(char *s)
{
	char s1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char s2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
