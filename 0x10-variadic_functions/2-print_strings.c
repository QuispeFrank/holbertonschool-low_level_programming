#include "variadic_functions.h"

/**
 * nul - a function that test if some
 * char pointer points to a null.
 *
 * @pt_nil: pointer to string "nil".
 * @string: pointer to string to be tested.
 *
 * Return: @pt_nil - if @string points to null
 * - @string otherwise.
 */

char *nul(char *pt_nil, char *string)
{
	if (string == NULL)
		return (pt_nil);

	return (string);
}

/**
 * print_strings - print_strings
 * @separator: separator
 * @n: n
 *
 * Return: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;
	char *nil = "(nil)";

	/* argument validation */
	if (n == 0)
	{
		printf("\n");
		return;
	}

	/* va_start & va_end */
	va_start(argptr, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%s", nul(nil, va_arg(argptr, char *)));
		else
			printf("%s%s", nul(nil, va_arg(argptr, char *)), separator);
	}
	printf("%s\n", nul(nil, va_arg(argptr, char *)));
	va_end(argptr);
}
