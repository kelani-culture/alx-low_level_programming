#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char ch, dh;

ch = 'a';
dh = 'A';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (dh = 'A'; dh <= 'Z'; dh++)
{
putchar(dh);
}
putchar('\n');
return (0);
}
