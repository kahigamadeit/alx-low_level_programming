#include "main.h"

/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting the arrays
 * Return: returns a new value
 */
char *_strpbrk(char *s, char *accept)
{
int y;
int z;
for (y = 0; s[y] != '\0'; y++)
{
for (z = 0; accept[z] != '\0'; z++)
{
if (s[y] == accept[z])
{
return (s + y);
}
}
}
return (0);
}
