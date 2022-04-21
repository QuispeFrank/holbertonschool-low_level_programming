#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints all [hour:min] in a day.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			/* .. tic toc .. */
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
