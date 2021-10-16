#include "main.h"

/**
 * leet - encodes into 1337
 * @teel: array
 * Return: end program
 **/

char *leet(char *teel)

{
	int i;

	for (i = 0; teel[i] != 0; i++)
		/* the requirements are really pushing me back on this one :S */
	{
		if ((teel[i] <= 'z') && (teel[i] >= 'a'))
		teel[i] += 'A' - 'a';
	}
	return (teel);
}
