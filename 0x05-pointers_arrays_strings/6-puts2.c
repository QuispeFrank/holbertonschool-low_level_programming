#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to array
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int n_elements = 0;
	int index = 0;

	while (str[n_elements] != '\0')
	{
		n_elements++;
	}

	while (index < n_elements)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar(10);
}

