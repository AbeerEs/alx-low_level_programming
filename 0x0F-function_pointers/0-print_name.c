#include "function_pointer.h"
/**
 *print_name -  prints a name.
 *@name: input parameter
 *@f: input parameter
 *Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
