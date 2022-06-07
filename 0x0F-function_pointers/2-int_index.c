#include "fuction_pointers.h"

/**
 *int_index - sreach spacific memeber in the array
 *@array: to be searched
 *@size: size of the array
 *@cmp: pointer fuction to go through the array
 *return: first element if cmp doesn't return 0
 *-1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
int j;
if (array && size && cmp)
{
for (i = 0; i < size; i++)
{
j = array[i];
cmp(j);
if (cmp(j) != 0)
{
return (i);
}
}
}
return (-1);
}
