i#include "main.h"

/**
 *  *_strcpy - copy string
 *
 *  @dest: string
 *  @src: string
 *
 *  Return: character
 */

char *_strcpy(char *dest, char *src)
{

	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}