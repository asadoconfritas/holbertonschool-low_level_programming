#include "main.h"

/**
 * puts_half - print w putchar
 * @str: char
 * Return: end program
 **/

void puts_half(char *str)
{
	int i, lng;

	i = 0;
	while (*(str + i) != 0)
		i++;
	lng = i - 1;
	i = 0;
	while (*(str + i) != 0)
	{
		if (i > (lng / 2))
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
