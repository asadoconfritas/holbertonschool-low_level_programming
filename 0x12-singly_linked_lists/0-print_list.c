#include "lists.h"
#include <stdio.h>

/**
 * print_list - all elements of the list
 * @h: pointer to list
 * Return: n of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t cont;

	cont = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cont++;
	}
	return (cont);
}
