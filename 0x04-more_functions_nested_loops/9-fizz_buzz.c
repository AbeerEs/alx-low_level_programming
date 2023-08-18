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
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
