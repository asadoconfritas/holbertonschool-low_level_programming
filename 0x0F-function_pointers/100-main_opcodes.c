#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: size argv
 * @argv: ;)
 * Return: end program
 **/

int main(int argc, char *argv[])
{
	int sz;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	sz = atoi(argv[1]);

	if (sz < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
