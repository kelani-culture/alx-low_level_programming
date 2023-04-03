#include "main.h"

/**
 *  _strspn - gets the length of a prefix string
 *
 *  @s: string pointer
 *  @accept: string to count occurence
 *
 *  Return: sum
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				sum += 1;
			}
			accept++;
		}
		if (*s == ' ')
		{
			break;
		}
		s++;
	}
	return (sum);
}
