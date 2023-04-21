#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that prints the opcodes of its own main function.
 *
 * @argc: argumnet count
 * @argv: argument variable
 * Return: Always 0 success
 */

int main(int argc, char *argv[], char *envp[])
{
	int number_bytes, i;
	char *func = (char *)main;
	(void) envp;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_bytes; i++)
	{
		printf("%02x", func[i] & 0xFF);

		if (i < number_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
