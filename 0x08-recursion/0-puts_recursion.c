/*
 * File:.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - recursion of a string
 *
 *
 * @s: pointer to array
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
