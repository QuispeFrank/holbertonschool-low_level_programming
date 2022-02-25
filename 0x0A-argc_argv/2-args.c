/*
 * File: 2-args.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
