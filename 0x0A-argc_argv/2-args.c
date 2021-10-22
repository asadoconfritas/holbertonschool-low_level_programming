#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: size of argv
 * @argv: array
 * Return: end program
 **/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
