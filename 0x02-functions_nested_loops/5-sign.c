#include "main.h"

/**
 * print_sign - used for differentiating negetive and positive nums
 *
 * @n: num to be checked
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
