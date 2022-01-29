#include "hash_tables.h"

/**
 * hash_table_create - creates a ht
 * @size: of the array
 * Return: end program
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
