#include "main.h"

/**
 * prints alphabet inlower case followed by newline
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
