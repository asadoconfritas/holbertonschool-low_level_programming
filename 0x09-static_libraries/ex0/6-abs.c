#include "main.h"

/**
 * _abs - prints a message
 * @c: char to print
 * Return: end program
 **/

int _abs(int c)
{
	return (c - (c * 2 * (c < 0)));
}
