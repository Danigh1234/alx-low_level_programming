#include "main.h"

/**
 * 5-sign function used for differentiating negetive and positive nums
 *
 * return: 1 for pos, 0 for 0 and -1 for neg
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
