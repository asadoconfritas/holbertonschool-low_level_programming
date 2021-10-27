#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer
 * @str: char
 * Return: end program
 **/

char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i, j;

	if (str != NULL)
	{
		for (j = 0; str[j]; j++)
			continue;
		p = malloc(j + 1);
		if (p != NULL)
		{
			for (i = 0; i < j; i++)
				p[i] = str[i];
		}
	}
	return (p);
}
