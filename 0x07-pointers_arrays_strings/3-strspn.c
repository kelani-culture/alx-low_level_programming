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
	unsigned int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!(accept[j]))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
