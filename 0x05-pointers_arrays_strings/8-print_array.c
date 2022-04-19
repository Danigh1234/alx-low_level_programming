#include <stdio.h>

/**
 * print_array - prints any array
 * @a: tha array to be printed 
 * @n: array's width
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(",");
}
}
printf("\n");
}
