#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string to concat to
 * @s2: string to concat from
 * @n: number of bytes to copy
 *
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, len_2 = 0, index = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* length of both strings sum together */
	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	/* length of string s2 */
	for (i = 0; s2[i]; i++)
		len_2++;

	concat = malloc(sizeof(char) * len -  1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[index++] = s1[i];


	for (i = 1; i <= n; i++)
	{
		concat[index++] = s2[i - 1];

		if (s2[i] == '\0')
			break;
	}
	concat[index] = '\0';
	return (concat);
}
