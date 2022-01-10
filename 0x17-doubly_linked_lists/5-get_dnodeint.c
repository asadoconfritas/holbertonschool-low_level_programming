#include "lists.h"

/**
 * get_dnodeint_at_index - get node from DLL
 * @head: of the LL
 * @index: to search
 * Return: end program
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (cont == index)
			return (head);
		head = head->next;
		cont++;
	}
	return (NULL);
}
