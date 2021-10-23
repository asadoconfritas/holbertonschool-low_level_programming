#include "main.h"

/**
 * *_strncat - print w return
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
	for (a = 0; (src[i] != 0) && (a < n); a++)
		dest[i + a] = src[a];
	if (a < n)
		dest[i + a] = src[a];
	return (dest);
}
