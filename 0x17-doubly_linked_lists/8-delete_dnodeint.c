#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer
 * @index: at node to delete
 * Return: end program
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *sec = *head;

	if (!(head))
		return (-1);
	while (sec)
	{
		if (cont == index)
		{
			if (cont == 0)
				*head = sec->next;
			if (sec->next)
				sec->next->prev = sec->prev;
			if (sec->prev)
				sec->prev->next = sec->next;
			free(sec);
			return (1);
		}
		sec = sec->next;
		cont++;
	}
	return (-1);
}
