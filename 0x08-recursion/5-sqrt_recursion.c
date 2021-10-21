#include "main.h"

/**
 * ssj - aux function
 * @n: int
 * @j: int
 * Return: result
 **/

int ssj(int n, int j)
{
	if (j * j == n)
		return (j);
	else if (j * j > n)
		return (-1);
	return (ssj(n, j + 1));
}

/**
 * _sqrt_recursion - print program
 * @n: int
 * Return: end program
 **/

int _sqrt_recursion(int n)

{
	return (ssj(n, 1));
}
