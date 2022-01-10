#include "lists.h"

/**
 * free_dlistint - free all nodes
 * @head: of the LL
 * Return: end program
 **/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
