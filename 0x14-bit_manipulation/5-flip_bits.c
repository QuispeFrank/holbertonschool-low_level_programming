#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = 1;
	unsigned int changes_time = 0;
	int i;

	var = var << 63;

	for (i = 0; i <= 63; i++)
	{
		if ((var >> i & (n ^ m)) != 0)
			changes_time += 1;
	}
	return (changes_time);
}
