#include "main.h"

/**
 * string_toupper - turns lowercase to uppercase
 * @kobe: new array
 * Return: end product
 **/

char *string_toupper(char *kobe)
{
	int i;

	for (i = 0; kobe[i] != 0; i++)
	{
		if ((kobe[i] <= 'z') && (kobe[i] >= 'a'))
			kobe[i] += 'A' - 'a';
	}
	return (kobe);
}
