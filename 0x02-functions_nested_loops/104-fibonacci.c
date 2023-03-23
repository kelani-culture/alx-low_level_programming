#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	long int prev = 1, curr = 2, next_term;
	int i;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", prev);

		next_term = prev + curr;

		prev = curr;
		curr = next_term;

		if (i != (98 - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
