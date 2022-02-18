/*
 * File: 7-leet.c
 * Auth: Quispe Frank
 */

#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @array: A pointer to array of chars
 *
 * Return: @array pointer
 */
char *leet(char *array)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; array[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (array[i] == a[j])
			{
				array[i] = b[j];
			}
		}
	}

	return (array);
}
