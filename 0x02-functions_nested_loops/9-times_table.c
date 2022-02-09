#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the last number of a nuber
 *
 * Return: nothing
 */
void times_table(void)
{
	int x, y, a, b, res;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			res = x * y;
			if (res > 9)
			{
				a = res / 10;
				b = res % 10;
				_putchar(a + 48);
				_putchar(b + 48);
			}
			else
			{
				if (x != 0)
				{
					_putchar(32);
				}
				_putchar(res + 48);
			}
			if (x != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
