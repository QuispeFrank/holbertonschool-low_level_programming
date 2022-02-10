#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Determine if a character is a number
 * @n: value to test
 * Return: ...
 */
int _isdigit(int n)
{
	int isdigit;

	if (n >= 48 && n <= 57)
	{
		isdigit = 1;
	}
	else
	{
		isdigit = 0;
	}
	return (isdigit);
}
