#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates mem w malloc -array-
 * @nmemb: n of elements
 * @size: in bytes
 * Return: end program
 **/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);
	return (p);
}
