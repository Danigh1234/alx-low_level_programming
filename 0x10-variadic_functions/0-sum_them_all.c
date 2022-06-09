#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add togather all the parameters passed to it
 * @n: num of arg passed
 * return: result of sumation
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i sum;
va_list ap;
va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
