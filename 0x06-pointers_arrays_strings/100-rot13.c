#include  "main.h"

/**
 * rot13 - encrypts a string uing rot13
 * @str - string to encrypt
 * Return: char value
 */

char *rot13(char *str)
{
int me = 0, u;
char this1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char this2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
while (str[me])
{
for (u = 0; this1 < 52; u++)
{
if (str[me] == this1[u])
{
str[me] = this2[u];
break;
}
}
me++;
}
return (str);
}
