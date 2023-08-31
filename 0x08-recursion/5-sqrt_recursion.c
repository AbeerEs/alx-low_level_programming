#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input value
 *@val: input value
 *Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 *square - find square
 *@n: input value
 *@val: input val
 *Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
