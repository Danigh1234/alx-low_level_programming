#include <stdio.h>

/**
 * main - is entry to the program
 *
 * program print lowercase alphabet except q and e
 */
int main(void)
{
char s;
for (s ='a'; s <= 'z'; s++)
{
if (s != 'e' && s != 'q')
putchar(s);
}
putchar('\n');

return (0);
}
