#include "main.h"

/**
 * print_number - prints an int
 * @n: integer printed
 */

void print_number(int n)
{
unsigned int jum = n;
if (n < 0)
{
_putchar('-');
jum = -jum;
}
if ((jum / 10) > 0)
print_number(jum / 10);
_putchar((jum % 10) + '0');
}
