#include "main.h"

/**
* _isalpha - entry point
* @c: checks input of function
* description: print alphabet by  using putchar
* Return: (0) success
*
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if(c >= 65 && c <= 90)
return (1);
return (0);
}
