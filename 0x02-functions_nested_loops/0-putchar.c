/* filename: main.c */
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;
	char ascii[] = "_putchar\n";

	for (index = 0; ascii[index]; index++)
		_putchar(ascii[index]);

	return (0);
}
