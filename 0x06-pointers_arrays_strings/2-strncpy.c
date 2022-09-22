#include "main.h"
/**
 * *_strncpy - cp's at most an I/no of bytes from str src
 * @dest: buffer storing the str cp
 * @src: source str
 * @n: max no of bytes to be cpied
 * Return: to resulting str
 */
char *_strncpy(char *dest, char *src, int n)
{
int jam = 0, src_len = 0;
while (src[jam++])
src_len++;
for (jam = 0; src[jam] && jam < n; jam++)
dest[jam] = '\0';
return (dest);
}
