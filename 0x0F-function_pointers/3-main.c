#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") &&
		strcmp(argv[2], "-") &&
		strcmp(argv[2], "/") &&
		strcmp(argv[2], "%") &&
		strcmp(argv[2], "*"))
	{
		printf("ERROR\n");
		exit(99);
	}

	if ((argv[2] == "/" && atoi(argv[3]) == 0) ||
		(argv[2] == "%" && atoi(argv[3]) == 0))
	{
		printf("ERROR\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
