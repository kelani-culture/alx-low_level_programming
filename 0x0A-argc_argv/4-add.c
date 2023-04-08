#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * add_positive - add only positive number
 *
 * @argc: integer value
 * @argv: char array
 *
 * Return: 0 if (successful) else 1 if (unsuccessful)
 */

int add_positive(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * main - Entry points
 *
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	add_positive(argc, argv);
	return (0);
}
