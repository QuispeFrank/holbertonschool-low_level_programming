/*
 * File: 1-print_rev_recursion.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: pointer to array from where to print.
 *
 * Return: nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
