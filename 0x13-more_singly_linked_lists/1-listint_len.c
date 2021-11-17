#include "main.h"
/**
 * listint_len - gets n of elements
 * @h: list
 * Return: n of elements
 **/
size_t listint_len(const listint_t *h)
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
