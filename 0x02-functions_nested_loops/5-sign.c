#include "main.h"

/**
* print_sign - entry point
* @n: number from input of function
* description: print alphabet by  using putchar
* Return: (1) for sign + , (0) equal 0 , (-1) for sign -
*
*/
int print_sign(int n)
{
if (n > 0)
	{
		_putchar(43);
return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
