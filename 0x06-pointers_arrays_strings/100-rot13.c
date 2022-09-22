#include  "main.h"

/**
 * rot13 - encrypts a string uing rot13
 * @s: string to encrypt
 * Return: char value
 */

char *rot13(char *s)
{
char this1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char this2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i;
int j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; this1[j] != '\0'; j++)
{
if (s[i] == this1[j])
{
s[i] = this2[j];
break;
}
}
}
return (s);
}
