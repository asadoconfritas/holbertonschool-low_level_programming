#include "main.h"

/**
 * _strlen - print w return
 * @s: int
 * Return: end program
 **/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + 1) != 0)
		i++;
	return (i);
}
