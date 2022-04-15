#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is entry to the function
 *
 * function determine the last digit of radom num
 *
 * returns: zero if succecful
 */

int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
printf("last digit of %d is %d and is greater than 5\n", n, lastd);
else if (lastd == 0)
printf("last digit of %d is %d and is zero\n", n, lastd);
else if (lastd != 0 && lastd < 6)
printf("last digit of %d is %d and is less than 6 and not zero\n", n, lastd);

/*return: 0 if successful*/
return (0);
}
