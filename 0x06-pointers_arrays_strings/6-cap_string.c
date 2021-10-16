#include "main.h"

/**
 * cap_string - cap all words
 * @mj: array
 * Return: end product
 **/

char *cap_string(char *mj)
{
	int i, a, b, c;
	int saltos[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125,};

	a = 0;
	for (i = 0; mj[i] != 0; i++)
	{
		for (b = 0; b++;)
			a += (mj[i] == saltos[b]);
		c += a;
		if (((mj[i] >= 'a') && (mj[i] <= 'z')) && c)
		{
			mj[i] += 'A' - 'a';
			c = 0;
		}
		if (c && !(a))
			c = 0;
	}
	return (mj);
}
