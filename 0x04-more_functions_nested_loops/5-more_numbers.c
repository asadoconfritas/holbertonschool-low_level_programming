#include "main.h"

/**
 * more_numbers - print w putchar
 * Return: end program
 **/

void more_numbers(void)
{
	int i, c;

	for (i = 0; i <= 14; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
