#include "main.h"

/**
 * get_bit - function that returns
 * the value of a bit at a given index.
 * binary representation of a number.
 *
 * @n: the  decimal number.
 * @index:  is the index, starting from
 * 0 of the bit you want to get
 *
 * Return: the value of the bit at index
 * index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int var = 1;

	if (index > 63)
		return (-1);

	var = var << index;

	if ((var & n) != 0)
		return (1);
	else
		return (0);
}
