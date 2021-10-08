#include "main.h"

/**
 * print_diagonal - print w putchar
 * @n: int
 * Return: end program
 **/

void print_diagonal(int n)
{
	int i, m;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (m = 0; m < i; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
