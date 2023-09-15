#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: input parameter
 *@n: input parameter
 *@...: number to print
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{       
        unsigned int i = n;
        va_list ap;

        if (!n)
        {
                printf("\n");
                return;
        }
        va_start(ap, n);
        while (i--)
                printf("%d%s", va_arg(ap, int),
                                i ? (separator ? separator : "") : "\n");
        va_end(ap);
        
}
