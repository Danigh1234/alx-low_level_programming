/**
 * *_strcpy - copies the string pointed by scr including \0
 *
 * @src: pointer
 * @dest: pointer
 * return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, l;
for (l = 0; src[l] != '\0'; l++)
{
}
for (i = 0; i <= l; l++)
{
dest[i] = src[i];
}
return (dest);
}
