#include "3-calc.h"

/**
 * main - main
 * @argc: argc
 * @argv: argv
 *
 * Return: return
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	int res, var1, var2;
	int (*pf)(int, int);

	if (argc != 4)
	{	printf("Error\n");
		exit(98); }
	if ((argv[2][0] != '-' && argv[2][0] != '%' && argv[2][0] != '/'
			&& argv[2][0] != '*' && argv[2][0] != '+' && argv[2][0] != '-')
			|| argv[2] == NULL || argv[2][1] != '\0')
	{	printf("Error\n");
		exit(99);	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{	printf("Error\n");
		exit(100);	}
	var1 = atoi(argv[1]);
	var2 = atoi(argv[3]);
	pf = get_op_func(argv[2]);
	res = pf(var1, var2);
	printf("%d\n", res);
	return (0);
}
