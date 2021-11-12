#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: ptr to ptr
 * @str: str to dup
 * Return: ptr to list
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *sptr;

	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}
	sptr = *head;

	while (sptr->next != NULL)
		sptr = sptr->next;

	ptr->next = ptr;

	return (ptr);
}
