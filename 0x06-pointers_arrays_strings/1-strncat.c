#include "main.h"

/**
 * *strncat - print w return
 * @dest: char
 * @src: char
 * @n: int
 * Return: 0
 **/

char *_strncat(char *dest, char *src, int n)

{
	int i, a;

	for (i = 0; dest[i] != 0; i++)
		continue;
	while ((a = 0; src[i] != 0; a++) || (a < n))
		dest[i + a] = src[a];
	return (dest);
}
