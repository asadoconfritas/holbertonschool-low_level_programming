#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary search algorithm
 * @array: ptr
 * @size: n of elements
 * @value: to search for
 * Return: index or -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i = 0;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid +  1;
	}
	return (-1);
}
