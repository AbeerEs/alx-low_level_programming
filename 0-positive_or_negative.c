#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main
 * entry point
 * positive or negative 
* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printif("%i is positive\n", n;)
	else if (n==0)
		printif("%i is zero\n", n);
	else 
		printif("%i is negative\n", n);
	return (0);
}
