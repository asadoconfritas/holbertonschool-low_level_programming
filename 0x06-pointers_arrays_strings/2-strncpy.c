#include "main.h"

/**
 * _strncpy - print w return
 * @dest: char
 * @src: char
 * @n: int
 * Return: end program
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	i++;
	dest[i] = 0;
	return (dest);
}
