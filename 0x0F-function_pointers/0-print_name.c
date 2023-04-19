#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that print name
 *
 * @name:  char name to print
 * @f: function pointers
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0' && name != NULL && f != NULL)
		f(name);
}
