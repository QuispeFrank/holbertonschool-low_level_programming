/*
 * File: 4-add.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[])
{
	int suma = 0;
	int bad = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		char *p = argv[argc];

		if (*p >= 48 && *p <= 57)
		{
			suma += atoi(argv[argc]);
			continue;
		}
		bad = 1;
		break;
	}

	if (bad == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", suma);
	return (0);
}
