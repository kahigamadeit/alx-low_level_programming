#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
