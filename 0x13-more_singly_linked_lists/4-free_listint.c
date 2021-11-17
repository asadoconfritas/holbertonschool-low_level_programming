#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: ptr to list
 * Return: void
 **/
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
