#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: ptr
 * @index: index
 * Return: end pointer
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
