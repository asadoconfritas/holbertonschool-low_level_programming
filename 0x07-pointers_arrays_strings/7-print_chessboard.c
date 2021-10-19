#include "main.h"

/**
 * print_chessboard - prints a a chessboard
 * @a: char
 * Return: end program
 **/

void print_chessboard(char (*a)[8])

{
	int y, x;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
	}
	_putchar('\n');
}
