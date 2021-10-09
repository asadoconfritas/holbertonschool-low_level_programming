#include <stdio.h>
#include "main.h"

/**
 * main - print w printf
 * Return: end program
 **/

int main(void)
{
	int i;
	{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
}
