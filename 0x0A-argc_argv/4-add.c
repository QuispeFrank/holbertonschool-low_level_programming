/*
 * File: 4-add.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 1 - If one of the number contains symbols.
 * 0 - otherwise.
 *         
 */
int main(int argc, char *argv[])
{
	int y, x, sum = 0;

	for (y = 1; y < argc; y++)
	{
		for (x = 0; argv[y][x]; x++)
		{
			if (argv[y][x] < '0' || argv[y][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[y]);
	}

	printf("%d\n", sum);

	return (0);
}
