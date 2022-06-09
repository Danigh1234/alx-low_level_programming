#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print num give as parameter with given const string in between
 * @separator: cost string to be printed b/n num
 * @n: num of num to printed
 * @...: num to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list num;
va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (i = (n - 1) && separator)
printf("%s", separator);
}
printf("\n");i
va_end(num);
}
