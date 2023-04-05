#include "main.h"

/**
 * _pow_recursion - calculate the power of a number
 *
 * @x: integer
 * @y: integer
 *
 * Return: a power of int x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return x * _pow_recursion(x, y - 1);
}
