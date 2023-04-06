#include "main.h"
#define NUM_EVEN 2
#define NUM_ODD 3
#define TRUE 1
#define FALSE 0

int search_prime(int n, int  k);
/**
 *  is_prime_number - checks if a number is prime
 *
 *  @n: integer
 *  Return: prime number
 */

int is_prime_number(int n)
{
	if (n < NUM_EVEN)
	{
		return (FALSE);
	}
	else if (n == NUM_EVEN)
	{
		return (TRUE);
	}
	else if (n % NUM_EVEN == 0)
	{
		return (FALSE);
	}
	else
	{
		return (search_prime(n, NUM_ODD));
	}

}

/**
 * search_prime - checks if an odd number is prime
 *
 * @n: odd int
 * @k: integer
 * Return: prime number
 */

int search_prime(int n, int k)
{
	if (k * k > n)
	{
		return (TRUE);
	}
	if (n % k == 0)
	{
		return (FALSE);
	}

	return (search_prime(n, k + NUM_EVEN));
}
