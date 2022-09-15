#include "main.h"

/*
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char i;
char h;
for (h = 0; h <= 9; h++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
