#include "main.h"
/**
 **_strcat - concatenates two strings
 *@dest: input parameter
 *@src: input parameter
 *Return: pointer to resulting
 */
char *_strcat(char *dest, char *src)
{
	int count1, count2;

	count1 = 0;
	while (dest[count1])
		count1++;
	for (count2 = 0; src[count2]; count2++)
	{
		dest[count1++] = src[count2];
	}
	return (dest);
}
