#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_cents -  prints the minimum number of coins to make change
 *	* for an amount of money.
 * @argc: total number of argument
 * @argv: amount of money
 * @size: size of coin array
 * @coins: coins denomiantion
 *
 * Return: minimum number of coin
 */

int check_cents(int argc, char *argv[], int coins[], int size)
{
	int i, amount, j, count = 0;

	for (j = 0; j < argc; j++)
	{
		if (argc == 1 || argc > 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			amount = atoi(argv[j]);
		}
	}

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		while (coins[i] <= amount)
		{
			amount -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Alway 0 (success)
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int size = sizeof(coins) / sizeof(int);

	check_cents(argc, argv, coins, size);
	return (0);
}
