#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a list
 * @head: ptr
 * Return: void
 **/
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head)
	{
		aux = *head;
		(*head) = (*head)->next;
		free(aux);
	}
	head = NULL;
}
