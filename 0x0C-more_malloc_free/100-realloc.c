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

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (p);
}
