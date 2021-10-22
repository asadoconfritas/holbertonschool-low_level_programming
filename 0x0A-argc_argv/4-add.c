#include <stdio.h>
#include <stdlib.h>

/**
 * main - add argv values
 * @argc: size of argv
 * @argv: array
 * Return: end program
 **/

int main(int argc, char **argv)

{
	int i;
	int res = 0;
	int ch;

	for (i = 1; i < argc; i++)
	{
		for (ch = 0; argv[i][ch] != 0; ch++)
		{
			if (argv[i][ch] < 48 || argv[i][ch] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
