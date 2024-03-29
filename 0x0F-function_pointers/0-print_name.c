#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be printed.
 * @f:pointer to the function that prints.
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	/* argument validation */
	if (name ==  NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
