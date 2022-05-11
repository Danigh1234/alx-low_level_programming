#include "main.h"
/**
 * _put - print a string followed by new line
 *
 * @str: is the string to be printed
 *return: no return
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
