#include "main.h"

/**
 * function print 10x 10 lower case alphabet
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
