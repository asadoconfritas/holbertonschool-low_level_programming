#include "main.h"

/**
 * set_bit - to 1, given index
 * @n: ptr to num
 * @index: of the bit
 * Return: end program
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
