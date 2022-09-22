#include  "main.h"

/**
 * rot13 - encrypts a string uing rot13
 * @str - string to encrypt
 * Return: char value
 */

char *rot13(char *str)
{
char this1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char this2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i;
int j = 0;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; this1[j] != '\0'; u++)
{
if (str[i] == this1[j])
{
str[i] = this2[j];
break;
}
}
}
return (str);
}
