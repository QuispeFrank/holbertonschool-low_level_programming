#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("%s ", "Fizz");
			}
			else
			{
				if (i % 5 == 0)
				{
					if (i == 100)
					{
						printf("%s", "Buzz");
					}
					else
					{
						printf("%s ", "Buzz");
					}
				}
				else
				{
					printf("%d ", i);
				}
			}
		}
	}
	putchar(10);

	return (0);
}

