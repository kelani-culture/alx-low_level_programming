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

void print_opcode(char *func, int number_bytes);

int main(int argc, char *argv[])
{
	int number_bytes;
	unsigned char *func;

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
	func = (unsigned char*)main;

	print_opcode(func, number_bytes);
}

void print_opcode(char *func, int number_bytes)
{
	int i;

	for(i = 0; i < number_bytes; i++)
		printf("%02x ", func[i]);
	printf("\n");
}
