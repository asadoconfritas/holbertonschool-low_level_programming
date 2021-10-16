#include "main.h"

/**
 * *_strcat - prints w return
 * @dest: char
 * @src: char
 * Return: end program
 **/

char *_strcat(char *dest, char *src)
{
	int i, y;

	for (i = 0; dest[i] != 0; i++)
		continue;
	for (y = 0; src[y] != 0; y++)
		dest[i] = src[y];
	i++;
	dest[i] = 0;
	return (dest);
}
