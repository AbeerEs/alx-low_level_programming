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
int digit = 48;
while (digit <= 102)
{
putchar(digit);
if (digit == 57)
digit+=57;
digit++;
}
putchar('\n');
return (0);
}
