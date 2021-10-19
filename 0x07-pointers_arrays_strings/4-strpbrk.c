#include "main.h"

/**
 * _strpbrk - print w return
 * @s: char
 * @accept: char
 * Return: end program
 **/

char *_strpbrk(char *s, char *accept)

{
	int i, j;
	char *poi;

	i = 0;
	j = 0;

	while (*(s + i) != 0)
	{
		while (*(accept + j) != 0)
		{
			if (*(accept + j) == *(s + i))
			{
				poi = &s[i];
				return (poi);
			}
			j++;
		}
	i++
	}
}
