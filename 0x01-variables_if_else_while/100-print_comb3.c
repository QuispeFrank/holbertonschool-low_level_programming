#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  a, b;

	for (a = 48; a <= 56; a++)
	{

	for (b = a + 1; b <= 57; b++)
	{
		putchar(a);
		putchar(b);
		if (a == 56 && b == 57)
		{
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	}

	putchar(10);

	return (0);
}
