#include "main.h"

/**
 * get_bit - value, given index
 * @n: number
 * @index: to search value
 * Return: value
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
