#include "main.h"
/**
 * puts_half - print second half of string.
 * @str: string to be printed.
 *
 * return: non
 */
void puts_half(char *str)
{
int l, n, i;
for (l = 0; str[l] != '\0'; l++)
{
}
n = (l - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

