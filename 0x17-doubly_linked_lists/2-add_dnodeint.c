#include "lists.h"

/**
 * add_dnodeint - add a new node at the beggining
 * @head: pointer to pointer
 * @n: content
 * Return: pointer
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *upd = malloc(sizeof(dlistint_t));

	if (!upd)
		return (NULL);
	upd->n = n;
	upd->prev = NULL;
	upd->next = NULL;

	if (!(*head))
	{
		*head = upd;
		return (*head);
	}
	upd->next = *head;
	(*head)->prev = upd;
	*head = upd;
	return (*head);
}
