#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print numbers until 98 (asc or des)
* @n: value to test
* Return: ...
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;

		}
	}
	else
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
}
