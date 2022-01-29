#include "hash_tables.h"

/**
 * hash_table_print - print a ht
 * @ht: hash tables
 * Return: end program
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, enc = 0;
	hash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (!ptr)
			continue;
		if (enc)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		enc = 1;
		while (ptr->next)
		{
			ptr = ptr->next;
			printf(", '%s': '%s'", ptr->key, ptr->value);
		}
	}
	printf("}\n");
}
