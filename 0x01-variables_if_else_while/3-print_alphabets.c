#include <stdio.h>

/**
 * main - entry to the program
 *
 * program prints all the alphabet
 */
int main(void)
{
char c;
char s;
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
for (s = 'a'; s <= 'z'; s++)
putchar(s);
putchar('\n');

return (0);
/* return 0 if successful */
}
