#include "main.h"
/**
 *is_prime_number : returns 1 if the input is prime number, otherwise return 0
 *@n: input value
 *Return: int
 */
int check(int n, int i);
int is_prime_number(int n)
{
	return (check (n, 2));

}
int check (int n, int i)
{
	if (i >= n && n == 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (check(n, i + 1));
}
