#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - print a given num of string
 *@n: num of string
 *@separator: cost string printed in b/n strings
 *...: strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list s;
char *st;
va_start(s, n);
for (i = 0; i < n; i++)
{
st = va_arg(s, char *);
if (st != NULL)
printf("%s", st);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
