#include "search_algos.h"
/**
 * linear_search - searches for a value using Linear search algorithm
 * @array: ptr
 * @size: n of elements
 * @value: to search for
 * Return: index or -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return ((int)i);
	}
	return (-1);
}
