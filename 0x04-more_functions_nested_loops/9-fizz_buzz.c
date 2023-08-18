#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 *main - entry point
 *description prints the numbers from 1 to 100, followed by a new line
 *Return: Alwayes 0 (success)
 *
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("%s", "Fizz");
		else if (num % 5 == 0)
			printf("%s", "Buzz");
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", num);
	}
	printf("\n");
	return (0);
}
