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
	char *sec;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		sec = va_arg(list, char *);
		if (sec == NULL)
			printf("(nil");
		else
			printf("%s", sec);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
