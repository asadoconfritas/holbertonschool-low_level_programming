#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - points to a 2d array
 * @width: of the array
 * @height: of the array
 * Return: end program
 **/

int **alloc_grid(int width, int height)

{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = width; j >= 0; j--)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
