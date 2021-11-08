#include "main.h"

/**
 * print_number - self explanatory
 * @n: number to be printed
 * Return: number
 **/
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		a = (n * -1);
	}
	if (a / 10)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}
