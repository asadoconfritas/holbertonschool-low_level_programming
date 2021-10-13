#include "main.h"

/**
 * swap_int - swaps *
 * @a: int
 * @b: int
 * Return: end program
 **/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
