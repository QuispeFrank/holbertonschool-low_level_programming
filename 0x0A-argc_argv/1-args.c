/*
 * File: 1-args.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that prints the number of
 * arguments passed into it.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
