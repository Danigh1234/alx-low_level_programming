#include "main.h"

/**
 * function identifies both upper and lower case chars
 *
 * returns (1) if char return zero if non char
 */
int _isalpha(int c)
{
/* statment of the function */
if ((c > 'a' && c < 'c') || (c > 'A' && c < 'Z'))
{
/* function returns 1 if true */
return (1);
}
/* function returns 0 if condition is false */
else
{
return (0);
}
}
