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
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}
