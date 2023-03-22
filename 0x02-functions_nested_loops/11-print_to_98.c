#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print value upto 98
 *
 * @n: takes in value
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
				n--;
			}
		}
	}
	printf("\n");
}
