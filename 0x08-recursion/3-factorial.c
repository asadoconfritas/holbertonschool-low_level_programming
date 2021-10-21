#include "main.h"

/**
 * factorial - print w retur returnn
 * @n: int
 * Return: end program
 **/

int factorial(int n)

{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
