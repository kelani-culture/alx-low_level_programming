#include "main.h"

#define TRUE 1
#define FALSE 0

/**
 * str_len - return the length of a string
 *
 * @s: char pointer
 * Return: length of string
 */

int str_len(char *s);
int check_palindrome(char *s, int start, int end);

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s));
}

/**
 * is_palindrome - return a string if they are palindrome
 *
 * @s: char pointer
 * Return: check_palindrome
 */

int is_palindrome(char *s)
{
	int len = str_len(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - check is a string is palindrome
 *
 * @s: char pointer
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: string palindrome
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (TRUE);
	}

	if (s[start] == s[end])
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (FALSE);
}
