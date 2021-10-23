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
	int vc, di, ci, ds, un, cambio;

	if (argc == 2)
	{
		vc = atoi(argv[1]) / 25;
		di = (atoi(argv[1]) - 25 * vc) / 10;
		ci = (atoi(argv[1]) - 25 * vc - 10 * di) / 5;
		ds = (atoi(argv[1]) % 5) / 2;
		un = (atoi(argv[1]) % 5) % 2;
		cambio = vc + di + ci + ds + un;
		printf("%d\n", cambio);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}