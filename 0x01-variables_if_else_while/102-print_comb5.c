#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  a, b, c, d, aux = 0;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a == 57 && b == 57)
			{
			}
			else
			{
				for (c = a; c <= 57; c++)
				{
					for (d = 48; d <= 57; d++)
					{
					if (aux == b)
					{
					}
					else
					{
						d = b + 1;
						aux = b;
					}
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);

				if (a == 57 && b == 56 && c == 57 && d == 57)
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
	}
	}
	putchar(10);
	return (0);
}
