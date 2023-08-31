#include "main.h"
/**
 *is_prime_number : returns 1 if the input is prime number, otherwise return 0
 *check - find prim
 *@n: input value
 *@i: input parameter
 *Return: int
 */
int check(int n, int i);
int is_prime_number(int n)
{
	return (check(n, 2));

}
int check(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check(n, i + 1));
}
