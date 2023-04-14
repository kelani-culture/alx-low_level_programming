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

	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i] && i <  n; i++)
		len_2++;

	concat = malloc(sizeof(char) * (len + len_2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[index++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[index++] = s2[i];

	concat[index] = '\0';
	return (concat);
}
