#include "main.h"

/**
 * main - FizzBuzz.
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * numbers multiples of three print Fizz
 * numbers multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
		printf("%d", num);

		if (num != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
