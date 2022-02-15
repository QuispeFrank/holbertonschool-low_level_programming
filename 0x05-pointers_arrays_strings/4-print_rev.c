#include "main.h"
/**
 * print_rev - function that returns the length of a string
 * @s: ..
 * Return: returns the length of a string
 */

void print_rev(char *s)
{
	int i = 0;


while (*s != '\0')
{
	i++;
	s++;
}

while (i >= 0)
{
	_putchar(*s);
	s = s - 1;
	i--;
}
	_putchar(10);
}
