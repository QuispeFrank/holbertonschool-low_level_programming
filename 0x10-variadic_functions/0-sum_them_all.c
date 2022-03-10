#include "variadic_functions.h"

/**
 * sum_them_all - sum_them_all
 * @n:
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		va_end(argptr);
		return (0);
	}

	va_start(argptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argptr, int);
	}
	va_end(argptr);

	return (sum);
}
