/*
 * File: 0-whatsmyame.c
 * Auth: Quispe Frank *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that print its own name
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: SUCCESS
 *
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
