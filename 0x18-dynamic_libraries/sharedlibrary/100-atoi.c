#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted.
 * Return: a signed integer.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	for (; *s && (*s < '0' || *s > '9'); s++)
		if (*s == '-')
			sign = -sign;

	for (; (*s >= '0') && (*s <= '9'); s++)
		num = (num * 10) + *s - '0';

	return (sign * num);
}
