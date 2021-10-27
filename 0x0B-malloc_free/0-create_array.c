#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: sizeof array
 * @c: char
 * Return: end program
 **/

char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size);
		if (p != NULL)
		{
			for (i = 0; i < size; i++)
				p[i] = c;
		}
	}
	return (p);
}
