#include <stdio.h>

/**
 *main - entry point
 *@argc: input parameter
 *@argv: input parameter
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
