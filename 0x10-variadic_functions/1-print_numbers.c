#include "variadic_functions.h"

/**
 * print_numbers - print_numbers
 * @separator: separator
 * @n: n
 *
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;

	/* argument validation */
	if (n == 0)
		return;

	/* va_start & va_end */
	va_start(argptr, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(argptr, int));
		else
			printf("%d%s", va_arg(argptr, int), separator);
	}
	printf("%d\n", va_arg(argptr, int));
	va_end(argptr);
}
