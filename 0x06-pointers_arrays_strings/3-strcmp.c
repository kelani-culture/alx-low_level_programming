#include "main.h"

/**
 * _strcmp - compare the difference between two string
 *
 * @s1: string
 * @s2: string3
 * Return: differnce betweween string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
