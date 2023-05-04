#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary
 * Return: converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, i, bin, deci;
	unsigned int sum = 0;

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		else
		{
			bin = b[i] - '0';
			deci = bin << (len - i - 1);
			sum += deci;
		}
	}
	return (sum);
}
