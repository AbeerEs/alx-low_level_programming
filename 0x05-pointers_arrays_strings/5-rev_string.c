#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: input parameter
 *
 */
void rev_string(char *s)
{
	char rev = s[0];

	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	while (counter--)
		rev = s[counter];
	s[counter] = rev;
}
