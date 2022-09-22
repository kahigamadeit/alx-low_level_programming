#include "main.h"

/**
 * string_toupper - uppers a lower
 * @str: character to make upper
 * Return: return value of upper
 */

char *string_toupper(char *str)
{
int h;
for (h = 0; str[h] != '\0'; h++)
if (str[h] >= 'a' && str[h] <= 'z')
str[h] = str[h] - 32;
return (str);
}
