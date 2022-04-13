#include "main.h"

/**
 * _islower - check if character is lower case
 *c: character to be checked
 *
 * returns 1 if true and 0 other wise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
