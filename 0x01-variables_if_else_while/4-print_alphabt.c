#include <stdio.h>

/**
 * main - Holberton School project
 * Return: end product
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (!((i == 'q') | (i == 'z')))
	putchar(i);
	putchar('\n');
	return (0);
}