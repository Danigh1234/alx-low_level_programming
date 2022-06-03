#include "function_pointers.h"


/**
 *array_iterator - will execute arg function to all element of array
 *@array[]: arg array
 *@size: size of the array in bytes
 *return: void
 */
void array_iterator(int array[], size_t size, void(*action)(int *))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
