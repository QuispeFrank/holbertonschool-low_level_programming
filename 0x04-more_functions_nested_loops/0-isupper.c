#include "main.h"
#include <stdio.h>

/**
 * _isupper - Determine if a character is capital
 * @n: value to test
 * Return: ...
 */
int _isupper(int n)
{
	int isupper;

	if (n >= 65 && n <= 90)
	{
		isupper = 1;
	}
	else
	{
		isupper = 0;
	}
	return (isupper);
}
