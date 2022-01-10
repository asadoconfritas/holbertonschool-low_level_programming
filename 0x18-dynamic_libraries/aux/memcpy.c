#include "main.h"

/**
 * _memcpy - print w return
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: end program
 **/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
