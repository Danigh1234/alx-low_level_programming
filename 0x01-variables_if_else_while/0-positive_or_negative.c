#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* main: entry to fuction */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 1)
printf(" %d is positive\n", n);
else if (n < 1)
printf(" %d is negetive\n", n);
else
printf(" %d is zero", n);
/*return = 0 if successful*/
return (0);
}