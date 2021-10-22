#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: size of argv
 * @argv: array
 **/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
