#include "main.h"

/**
 * print_alphabet - prints alphabet inlower case followed by newline
 * return: return nothing return void
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
