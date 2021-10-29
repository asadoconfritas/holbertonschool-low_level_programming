#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates arr of ints
 * @min: value
 * @max: value
 * Return: end program
 **/

int *array_range(int min, int max)

{
	int a, dif;
	int *p;

	dif = max - min;
	if (min > max)
		return (NULL);

	p = malloc((dif + 1) * sizeof(int));
	if (!p)
		return (NULL);

	for (a = 0; a < dif; a++)
		*(p + a) = min + a;
	return (p);
}
