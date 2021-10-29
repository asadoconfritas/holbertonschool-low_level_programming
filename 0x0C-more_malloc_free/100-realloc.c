#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a mem block
 * @ptr: to prev mem block
 * @old_size: in bytes
 * @new_size: in bytes
 * Return: end program
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	int *p;

	if (ptr == NULL)
		p = malloc(new_size);
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		if (new_size == old_size)
			p = ptr;
		else
		{
			free(ptr);
			p = malloc(new_size);
		}
	}
	return (p);
}
