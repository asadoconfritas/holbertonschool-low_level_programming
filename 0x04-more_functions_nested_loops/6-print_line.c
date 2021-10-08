#include "main.h"

/**
 * print_line - print w putchar
 * @n: int
 * Return: end program
 **/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
