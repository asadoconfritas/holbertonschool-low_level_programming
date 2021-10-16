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

	i = 0;
	y = 0;

	while (dest[i] != 0)
		i++;

	while (src[y] != 0)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = 0;
	return (dest);
}
