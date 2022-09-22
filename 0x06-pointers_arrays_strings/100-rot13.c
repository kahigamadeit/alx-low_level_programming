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
int me;
int u = 0;
for (me = 0; str[me] != '\0'; me++)
{
for (u = 0; this1[u] != '\0'; u++)
{
if (str[me] == this1[u])
{
str[me] = this2[u];
break;
}
}
}
return (str);
}
