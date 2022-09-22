#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source of sting
 * @n: max amount of bytes to be copied
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int jam;
for (jam = 0; jam < n && src[jam] != '\0'; jam++)
{
dest[jam] = src[jam];
}
for (;jam < n; jam++)
{
dest[jam] = '\0';
}
return (dest);
}

