#include "lists.h"
/**
 * sum_listint - sums all the data of a list
 * @head: pointer
 * Return: suma
 **/
int sum_listint(listint_t *head)
{
	int suma = 0;

	while (head)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
