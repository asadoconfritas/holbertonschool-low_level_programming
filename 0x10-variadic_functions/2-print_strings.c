#include "variadic_functions.h"

/**
 * print_strings - followed by a new line
 * @separator: between strings
 * @n: of strings
 * Return: end program
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *aux;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		aux = va_arg(list, char *);
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", aux);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
