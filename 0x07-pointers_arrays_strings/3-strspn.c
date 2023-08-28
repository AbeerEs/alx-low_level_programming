#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: input parameter
 *@accept: input parameter
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			count = count + 1;
	}
	return (count);
}
