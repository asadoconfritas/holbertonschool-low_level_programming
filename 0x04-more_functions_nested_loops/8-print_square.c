#include "main.h"

/**
 * print_square - print w putchar
 * @size: int
 * Return: end program
 **/

void print_square(int size)
{
	int i, m;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (m = 0; m < size; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
