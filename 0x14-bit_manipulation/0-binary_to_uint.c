#include "main.h"

/**
 * binary_to_uint - conversion
 * @b: ptr to bin string
 * Return: converted n
 **/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;

	if (!b)
		return (n);
	for (; b[i]; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			n *= 2;
			n += (b[i] == '1');
		}
		else
			return (0);
	}
	return (n);
}
