#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  a, b, c;

	for (a = 48; a <= 55; a++)
	{

	for (b = a + 1; b <= 56; b++)
	{

	for (c = b + 1; c <= 57; c++)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == 55 && b == 56 && c == 57)
	{
	}
	else
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	putchar(10);

	return (0);
}

