#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements
 * @h: list
 * Return: n of nodes
 **/
size_t print_listint(const listint_t *h)
{
	unsigned int cont;

	cont = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
