#include <stdio.h>

/**
 * main - Holberton School project
 * Return: end product
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (!((i == 'e') | (i == 'q')))
	putchar(i);
	putchar('\n');
	return (0);
}
