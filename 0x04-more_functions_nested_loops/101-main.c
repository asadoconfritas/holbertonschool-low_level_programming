#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_number(INT_MIN);
	_putchar('\n');
	print_number(INT_MAX);
	_putchar('\n');
	printf("\nint_min: %d", INT_MIN);
	_putchar('\n');
	printf("int max: %d", INT_MAX);
	_putchar('\n');
	print_number(-689796857);
	_putchar('\n');
	return (0);
}
