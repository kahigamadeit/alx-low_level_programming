#include "main.h"
/**
 * _strncat - conats 2 strings using an I/ no of bytes from src
 * @dest: the str to be appended
 * @src: the str to be appended on dest
 * @n: no of bytes from src to be appended to dest
 * Return: A pointer to the resulting str
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
