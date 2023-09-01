#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: input parameter
 *@src: input parameter
 *@n: input parameter
 *Return: pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1, count2;

	count1 = 0;
	while (dest[count1])
		count1++;
	for (count2 = 0; count2 < n && src[count2] != 0; count2++)
	{
		dest[count1 + count2] = src[count2];
	}
	return (dest);
}
