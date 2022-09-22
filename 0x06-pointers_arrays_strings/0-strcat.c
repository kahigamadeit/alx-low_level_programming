#include "main.h"
/**
 * *_strcat - concats @src to @dest
 * @src: sorce str to append to @dest
 * @dest: the destination str to be concated
 * Return: pointer to str
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
