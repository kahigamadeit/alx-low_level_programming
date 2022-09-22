#include "main.h"

/**
 * _indexOf - returns is special character
 * @a: character to return
 * Return: true or false
 */

int _indexOf(char a)
{
int i;
char capArr[13] = {'\n', '\t', ' ', '.', ',',
';', ',', '!', '?', '(', ')', '{', '}'};
for (i = 0; i < 13; i++)
{
if (capArr[i] == a)
return (1);
}
return (0);
}
/**
 * cap_string - capitalises the string
 * @str: string
 * Return: the string capitalised
 */

char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (_indexOf(str[i]))
continue;
if (str[i] >= 'a' && str[i] <= 'z' && (_indexOf(str[i - 1]) || i == 0))
str[i] = str[i] - 32;
}
return (str);
}
