#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _multi - multiply number
 *
 * @argc: integer val
 * @argv: array val
 *
 * Return: 0 if successful else return 1 if error
 */

int _multi(int argc, char *argv[])
{
	int i, multi = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi *= atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}

int main(int argc, char *argv[])
{
	_multi(argc, argv);
	return (0);
}
