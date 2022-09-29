#include "main.h"
/**
 * _memcpy - copies from source to destination values in array
 * @dest: destination to cpy
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the dstring
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int y;
for (y = 0; y < n; y++)
{
dest[y] = src[y];
}
return (dest);
}
