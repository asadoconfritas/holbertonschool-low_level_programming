#include "main.h"
/**
 * flip_bits - counts bits needed to flip
 * @n: num1
 * @m: num2
 * Return: n of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, cont = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
			cont++;
		num >>= 1;
	}
	return (cont);
}
