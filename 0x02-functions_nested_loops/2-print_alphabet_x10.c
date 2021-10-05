#include <stdio.h>
#include "main.h"
#include "2-main.c"

/**
 *main - Holberton School project
 *Return: end product
 **/

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		putchar ('c');
		putchar ('\n');
		i++;
	}
}
