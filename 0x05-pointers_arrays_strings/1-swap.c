/**
 * swap_int - swaps the value of two intigers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */
void swap_int(int *a, int *b)
{
int c;
c = 0;
c = *a;
*a = *b;
*b = c;
}
