#include "main.h"
/**
 * set_bit - function that sets the
 * value of a bit to 1 at a given index
 * the value of a bit at a given index.
 * binary representation of a number.
 *
 * @n: puntero to the integer.
 * @index:  is the index, starting from
 * 0 of the bit you want to get
 *
 * Return: if it worked, or -1
 * * if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var = 1;

	if (index > 63)
		return (-1);

	var = var << index;
	*n = var | *n;
	return (1);
}
