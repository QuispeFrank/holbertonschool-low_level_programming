/*
 * File: 5-string_toupper.c
 * Auth: Quispe Frank
 */

#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @array: A pointer to array of chars
 *
 * Return: array
 */
char *string_toupper(char *array)
{
	int counter = 0;

	while (array[counter] != '\0')
	{
		if (array[counter] >= 97 && array[counter] <= 122)
			array[counter] -= 32;
		counter += 1;
	}
	return (array);
}
