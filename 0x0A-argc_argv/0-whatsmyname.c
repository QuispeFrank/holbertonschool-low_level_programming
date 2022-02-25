#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	exit (EXIT_SUCCESS);
}
