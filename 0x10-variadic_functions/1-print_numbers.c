#include "variadic_functions.h"

/**
 * print_numbers - followed by a new line
 * @separator: between numbers
 * @n: number of ints
 * Return: end program
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
		separator = "";

	for (; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
