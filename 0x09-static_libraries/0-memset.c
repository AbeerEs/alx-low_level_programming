#include "main.h"
/**
 **_memset -  fills memory with a constant byte
 *@s: input parameter
 *@b: input parameter
 *@n: input parameter
 *Return: pointer to the result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
