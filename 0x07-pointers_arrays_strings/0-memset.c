#include "main.h"
/**
 * _memset - sete the memory to array
 * @s: array to set
 * @b: set value as it is
 * @n: amts of time
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int y;
for (y = 0; y< n; y++);
{
s[y] = b;
}
return (s);
}
