#include "main.h"
/**
 * get_endianness -  function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	char *p = "Hola";

	if (&p[3] - &p[0] > 0)
		return (1);
	return (0);
}
