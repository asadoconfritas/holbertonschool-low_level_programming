#include "main.h"

/**
 * _strcmp - print w return
 * @s1: char
 * @s2: char
 * Return: end product
 **/

int _strcmp(char *s1, char *s2)
{
	int i, dif;

	dif = 0;
	for (i = 0; (s1[i] != 0) && (s2[i] != 0) && s1[i] == s2[i]; i++)
		continue;
	if (s1[i] != s2[i])
	{
		dif = s1[i] - s2[i];
	}
	return (dif);
}
