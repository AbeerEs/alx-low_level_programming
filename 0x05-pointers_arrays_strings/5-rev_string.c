#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: input parameter
 *
 */
void rev_string(char *s)
{
	int i;
	char rev = s[0];

	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
