#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * create_array -  function that creates an array of char
 *
 * @size: unsigned int  size
 * @c: pointer to char
 *
 * Return: Null if it fails else return array char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		chr = (char *)malloc(size * sizeof(char));

		if (chr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				chr[i] = c;
			}
			return (chr);
		}
	}
}
