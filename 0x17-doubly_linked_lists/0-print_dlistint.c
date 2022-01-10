#include "lists.h"

/**
 * print_dlistint - print all elements
 * @h: pointer
 * Return: n of elements
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int nodesn = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesn++;
	}
	return (nodesn);
}
