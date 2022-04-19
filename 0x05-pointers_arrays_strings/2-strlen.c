/**
 * _strlen - calculate the legth of strying.
 *
 * @s: the styring of who's length is to be calculated.
 * return: length.
 */
int _strlen(char *s)
{
int i;
int length = 0;
for (i = 0; s[i] !=  '\0'; i++)
{
length++;
}
return (length);
}
