#include "main.h"

/**
 * *_strcpy - print w return
 * @dest: char
 * @src: char
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(src + i) = *(dest + i);
		i++;
	}
	if (*(dest + i) == *(src + i))
	return (dest);
}
