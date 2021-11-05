#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: parameter
 * Return: end program
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, suma;
	va_list list;

	va_start(list, n);
	if (n == 0)
		return (0);
	suma = 0;
	i = 0;
	for (; i < n; i++)
		suma = suma + va_arg(list, unsigned int);
	va_end(list);
	return (suma);
}
