#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: writing alphapets from a to z
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
