#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: input parameter
 *
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
}
