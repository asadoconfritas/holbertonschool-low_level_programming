#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: ptr to list
 * Return: void
 **/
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(aux->str);
		free(aux);
	}
}
