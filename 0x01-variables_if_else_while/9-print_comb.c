#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
n = 0;

for (n = 0; n <= 9; n++)
{
putchar('0' + (n % 10));
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
