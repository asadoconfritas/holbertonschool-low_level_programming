#include "main.h"

/**
 * reverse_array - self explanatory
 * @a: array
 * @n: number of elements
 * Return: end product
 **/

void reverse_array(int *a, int n)
{
	int b, i;

	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
