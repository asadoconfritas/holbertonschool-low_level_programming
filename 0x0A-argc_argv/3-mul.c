#include <stdio.h>
#include <stdlib.h>

/**
 * main - print argc
 * @argc: size of argv
 * @argv: array
 * Return: end program
 **/

int main(int argc, char **argv)

{
	int i;

	if (argc == 3)
	{
		i = ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
