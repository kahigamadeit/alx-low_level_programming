#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
int tmp, jam;
for (jam = n - 1; jam >= n / 2; jam--)
{
tmp = a[n - 1 - jam];
a[n - 1 - jam] = a[jam];
a[jam] = tmp;
}
}
