/*
 * File: 6-cap_string.c
 * Auth: Quispe Frank
 */

#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * 
 * @str: A pointer to array of chars
 *
 * Return: @str pointer
 */
char *cap_string(char *str)
{
	int x = 0;
	char array[2];

	int spcr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;

	while (str[x] != '\0')
	{

		int i = 0, ans1 = 0, ans2 = 0;

		array[0] = str[x];
		array[1] = str[x + 1];

		while (i < 14)
		{
		if (array[0] == spcr[i])
		{
			ans1 = 1;
			break;
		}
			i += 1;
		}

		if (ans1 == 1)
		{
			if (array[1] >= 97 && array[1] <= 122)
				ans2 = 1;

		}
		if (ans2 == 1)
			str[x + 1] -= 32;

		x += 1;
	}
	return (str);

}
