#include "main.h"

/**
* _islower - entry point
* @c: checks input of function
* description: print alphabet by  using putchar
* Return: (0) success
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
