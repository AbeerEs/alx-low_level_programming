#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: writing numbers from 0 to 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
