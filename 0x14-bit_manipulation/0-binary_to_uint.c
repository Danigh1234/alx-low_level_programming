#include "main.h"

/**
 * binary_to_unit - change binary int to unsigned decimal
 * @b: is string containing 0 and 1 as element
 * return: converted num
 */
unsigned int binary_to_unit(const char *b)
{
int i;
unsigned int d_value = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
d_value = 2 * d_value + (b[i] - '0');
}
return (d_value);
}
