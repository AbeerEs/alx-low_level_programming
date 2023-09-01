#include "main.h"
/**
 **_strncpy - function that copies a string
 *@dest: input parameter
 *@src: input parameter
 *@n: input parameter
 *Return: pointer to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
