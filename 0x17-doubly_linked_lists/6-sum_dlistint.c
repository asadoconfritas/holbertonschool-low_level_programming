#include "lists.h"

/**
 * sum_dlistint - adds the elements
 * @head: pointer
 * Return: end program
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
