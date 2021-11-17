#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the first node of a list
 * @head: ptr
 * Return: end program
 **/
int pop_listint(listint_t **head)
{
	int aux;
	listint_t *otr;

	if (*head != NULL)
	{
		aux = (*head)->n;
		otr = *head;
		*head = (*head)->next;
		free(otr);
		return (aux);
	}
	else
		return (0);
}
