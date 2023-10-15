#include "main.h"
/**
 * main: Test function for positive or negative
 * Return: 0
 */
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}
