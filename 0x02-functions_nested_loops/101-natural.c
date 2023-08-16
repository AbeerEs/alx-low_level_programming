#include "main.h"
/**
 *main - entry point
 *description: sum all numbers multiples of 3 or 5
 *Return: alwayes 0 (success)
 */
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		sum += num;
	}
	printf("%d\n", sum);
}
