#include "main.h"

/**
 * string_toupper - turns lowercase to uppercase
 * arr: new array
 * Return: end product
 **/

char *string_toupper(char *arr)
{
	int i;

	for (i = 0; arr[i] != 0; i++)
	{
		if ((arr[i] <= 'z') && (arr[i] >= 'a'))
			arr[i] += 'A' - 'a';
	}
	return (arr);
}
