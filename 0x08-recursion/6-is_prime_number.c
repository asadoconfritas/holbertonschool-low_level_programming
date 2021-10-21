#include "main.h"

/**
 * milanga - return a value
 * @n: int
 * @j: int
 * Return: useful value
 **/

int milanga(int n, int j)
{
	return (milanga(n, j - 1));
}

/**
 * is_prime_number - work in progress
 * @n: int
 * Return: end program
 **/

int is_prime_number(int n)

{
	if (n > 1)
		return (milanga(n, n - 1));
	return (1);
}
