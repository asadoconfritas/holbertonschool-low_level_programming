#include <stddef.h>

/**
 * array_iterator - exec
 * @array: <-
 * @size: size of the array
 * @action: pointer to the function
 * Return: end program
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
