#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements
 * Return: end product
 **/

void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
