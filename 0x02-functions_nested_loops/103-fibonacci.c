#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Alwaay 0 (success)
 */

int main(void)
{
	long int prev = 1, curr = 2;
	int sum_even = 0, fibo;

	while (curr <= 4000000)
	{
		int next_term = prev + curr;

		if (next_term % 2 == 0)
		{
			sum_even += next_term;
		}
		prev = curr;
		curr = next_term;
	}
	printf("%d\n", sum_even);
	return (0);
}
