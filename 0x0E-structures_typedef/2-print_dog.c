#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct
 * @d: struct
 * Return: end program
 **/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->owner)
			printf("Owner %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
