#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * printss - printss
 * @argptr : argptr
 * Return: nothing
 */

void printss(va_list argptr)
{
	char *word = va_arg(argptr, char *);

	printf("%s", (word == NULL) ? "(nil)" : word);
}

/**
 * printsi - printsi
 * @argptr : argptr
 * Return: nothing
 */

void printsi(va_list argptr)
{
	printf("%d", va_arg(argptr, int));
}

/**
 * printsf - printsf
 * @argptr : argptr
 * Return: nothing
 */

void printsf(va_list argptr)
{
	printf("%f", va_arg(argptr, double));
}

/**
 * printsc - printsc
 * @argptr : argptr
 * Return: nothing
 */

void printsc(va_list argptr)
{
	printf("%c", va_arg(argptr, int));
}

/**
 * count_special - printss
 * @format_given : format_given
 * @char_admited: char_admited
 * Return: integer.
 */

int count_special(const char * const format_given, char *char_admited)
{
	int i = -1, j = -1, counter = 0;

	/* testing format */
	while (format_given[++i])
	{
		j = -1;
		while (char_admited[++j])
		{
			/* functions choice */
			if (format_given[i] == char_admited[j])
			{
				counter++;
			}
		}
	}
	return (counter);
}

/**
 * print_all - print_all
 * @format : format
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list argptr;
	int i = -1, j = -1, all_specials, counter_special = 0;
	char select_format[] = "cifs";
	void (*pf[])(va_list) = {printsc, printsi, printsf, printss};

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	all_specials = count_special(format, select_format);

	/* va_start & va_end */
	va_start(argptr, format);


	/* testing format format[++i] */
	while (format[++i])
	{
		j = -1;
		while (select_format[++j])
		{
			/* functions choice */
			if (format[i] == select_format[j])
			{
				counter_special++;
				pf[j](argptr);
				(counter_special < all_specials) ? printf(", ") : (j = 3);
			}
		}
	}
	printf("\n");

	va_end(argptr);
}
