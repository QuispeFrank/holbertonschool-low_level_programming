#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: pointer to array
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n_elements = 0;
	int index = 0;

	/*numbers of elements*/
	while (str[n_elements] != '\0')
	{
		n_elements++;
	}

	/*is it par?*/
	if (n_elements % 2 == 0)
		index = n_elements / 2;
	else
		index = (n_elements + 1) / 2;

	/*printing*/
	while (index < n_elements)
	{
		_putchar(str[index]);
		index += 1;
	}
	_putchar(10);
}

