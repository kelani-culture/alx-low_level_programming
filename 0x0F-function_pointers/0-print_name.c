#include "function_pointers.h"

/**
 * print_name - function that print name
 *
 * @name:  char name to print
 * @f: function pointers
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
