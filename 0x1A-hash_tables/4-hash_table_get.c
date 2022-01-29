#include "hash_tables.h"

/**
 * hash_table_get - get value considering key
 * @ht: hash table
 * @key: location
 * Return: end program
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int aux;

	if (!ht || !key)
		return (NULL);
	aux = key_index((const unsigned char *)key, ht->size);

	while (ht->array[aux])
	{
		if (strcmp(ht->array[aux]->key, key) == 0)
		{
			return (ht->array[aux]->value);
		}
		ht->array[aux] = ht->array[aux]->next;
	}
	return (NULL);
}
