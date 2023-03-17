#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptions: print lowercase letter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
