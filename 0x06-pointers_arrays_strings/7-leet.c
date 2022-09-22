#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string
 * Return: A pointer to the encoded str
 */

char *leet(char *str)
{
int jem = 0, jem1;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[jem])
{
for (jem1 = 0; jem1 <= 7; jem1++)
{
if (str[jem] == leet[jem1] || str[jem] - 32 == leet[jem1])
str[jem] = jem1 + '0';
}
jem++;
}
return (str);
}
