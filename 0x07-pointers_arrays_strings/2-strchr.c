#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char *c)
{
int y;
for (y = 0; s[y] != '\0'; y++)
{
if (s[y] == c)
{
return (s + y);
}
}
if (s[y] == c)
return (s + y);
return (0);
}
