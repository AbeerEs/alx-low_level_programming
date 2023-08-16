#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 *
 * @n: take the integer that input
 *
 *Return: alwayes (0) success
 */

int print_last_digit(int n)
{
	int last;
	
	if (n < 0)
		last = (-1) * (n % 10);
	else
		last = n % 10;
	_putchar (last + '0')
	return (last);
}
