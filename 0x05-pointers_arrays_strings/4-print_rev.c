#include "main.h"

/**
 * print_rev - print w putchar
 * @s: char
 * Return: end program
 **/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	while (i)
	{
		i--;
		_putchar (*(s + i));
	}
	_putchar('\n');
}
