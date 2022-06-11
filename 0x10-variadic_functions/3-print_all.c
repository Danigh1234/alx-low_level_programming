#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**print_all - prints char, int, float and strings
 *@format: available formats.
 *@lists: va_list type arg that manages unlisted arg
 *@n: num of arg *@sep: spacer string
 *return: always 0
 */
void print_all(const char * const format, ...)
{
int i = 0, n = 0;
char *str;
char *sep = ", ";
va_list lists;
va_start(lists, format);
while (format && format[n])
{
if (n == (i - 1))
{
sep = "";
}
switch (format[n])
{
case 'c':
{
printf("%c%s", va_arg(lists, int), sep);
break;
}
case 'i':
{
printf("%d%s", va_arg(lists, int), sep);
break;
}
case 'f':
{
printf("%f%s", va_arg(lists, float), sep)
break;
}
case 's':
{
str = va_arg(lists, char *);
if (!str)
str = "(nil)";
pritnf("%s", str);
break;
}
n++
}
printf("\n");
va_end(lists);
}
