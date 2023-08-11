#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* main - entry point
* description: false or true validation
* return (0) (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printif("%i is positive\n", n);
else if (n == 0)
printif("%i is zero\n", n);
else
printif("%i is negative\n", n);
return (0);
}
