#include "main.h"

/**
 * _strspn - prints w return
 * @s: char
 * @accept: char
 * Return: end program
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, j, nb;

	nb = 0;

	for (i = 0; *(s + i) != 32; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				nb++;
			}
		}
	}
	return (nb);
}
