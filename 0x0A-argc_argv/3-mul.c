/*
 * File: 3-mul.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	exit(EXIT_SUCCESS);
}
