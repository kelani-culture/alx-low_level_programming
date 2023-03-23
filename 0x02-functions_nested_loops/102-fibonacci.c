#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a = 1, b = 2, c, fibo;

	for (fibo = 0; fibo <= 100; fibo++)
	{
		printf("%lu", a);
		c = a + b;
		a = b;
		b = c;
		if (fibo != 100)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
