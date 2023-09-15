#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - prints strings, followed by a new line
 *@separator: input parameter
 *@n: input parameter
 *@...: num of char
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list ap;
	char *str;

	f (!n)
	{
		printf("\n");
		return;
        }
	va_start(ap, n);
	while (i--)
		printf("%s%s",(str =  va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
