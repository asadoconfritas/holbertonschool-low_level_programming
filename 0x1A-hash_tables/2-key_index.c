#include "hash_tables.h"

/**
 * key_index - get index of a key
 * @key: to find
 * @size: of the array
 * Return: end program
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
