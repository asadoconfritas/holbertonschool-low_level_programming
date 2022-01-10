#include "lists.h"

/**
 * dlistint_len - get n of elements
 * @h: pointer
 * Return: size
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
