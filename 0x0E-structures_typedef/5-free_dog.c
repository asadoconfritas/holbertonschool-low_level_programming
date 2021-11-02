#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function
 * @d: struct
 * Return: end program
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
