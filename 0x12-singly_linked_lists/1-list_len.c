#include "lists.h"
#include <stdio.h>

/**
 * list_len - count the elements of the list
 * @h: pointer to list
 * Return: n of nodes
 **/
size_t list_len(const list_t *h)
{
	size_t cont;

	cont = 0;
	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
