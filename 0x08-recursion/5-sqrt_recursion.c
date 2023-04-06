#include "main.h"
int sqrt_bin_search(int n, int low, int high);

/**
 *  _sqrt_recursion - function that returns the natural square root of a number
 *
 *  @n: integer
 *  Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return (sqrt_bin_search(n, 1, n));
	}
}

/**
 * sqrt_bin_search - the function calculate the mid
 *	* point of the search range and checks ig it's the
 *	* square root of n
 * @n: integer n
 * @low: lower bound
 * @high: upper bound
 *
 * Return: midpoint
 */

int sqrt_bin_search(int n, int low, int high)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			return (sqrt_bin_search(n, mid + 1, high));
		}
		else
		{
			return (sqrt_bin_search(n, low, mid - 1));
		}
	}
	else
	{
		return (-1);
	}


}
