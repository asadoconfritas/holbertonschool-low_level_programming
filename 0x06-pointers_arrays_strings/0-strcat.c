#include "main.h"

/**
 * *_strcat - prints w return
 * @dest: char
 * @src: char
 * Return: end program
 **/

char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != 0; i++)
		continue;
	for (a = 0; src[i] != 0; a++)
		dest[i + a] = src[a];
	return (dest);
}
