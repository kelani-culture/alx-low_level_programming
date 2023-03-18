#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
