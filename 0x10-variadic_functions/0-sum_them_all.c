#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: input parameter
 *...: the integers to sum
 *Return: int
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
