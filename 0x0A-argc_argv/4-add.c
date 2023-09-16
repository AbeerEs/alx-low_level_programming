#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: input parameter
 *@argv: input parameter
 *Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	
	while (--argc)
	{
		if (argv[argc] < '0' || argv[argc] > '9')
			return (printf("Error\n"), 1);
		sum += atoi(argv[argc]); 
	}
	printf("%d\n", sum);
	return (0);
}
