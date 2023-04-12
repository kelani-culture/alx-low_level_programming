#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument variable
 * Return: string concat
 */

char *argstostr(int ac, char **av)
{
	int row, col, len, next;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col]; col++)
		{
			len++;
		}
	}

	str = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col]; col++)
		{
			str[next++] = av[row][col];
		}
		str[next++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
