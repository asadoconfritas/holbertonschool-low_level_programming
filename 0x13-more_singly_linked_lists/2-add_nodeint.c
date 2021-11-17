#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beggining of a listint_t list
 * @head: ptr
 * @n: int
 * Return: ptr to listint_t
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
