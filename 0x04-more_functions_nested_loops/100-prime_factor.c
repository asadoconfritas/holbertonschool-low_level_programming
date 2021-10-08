#include <stdio.h>

/**
 *IsPrime - print w return
 *@n: long int
 *Return: end program
 **/

int IsPrime(long int n)

{
	{
		if (n == 2 || n == 3)
			return (1);
		if (n <= 1 || n % 2 == 0 || n % 3 == 0)
			return (0);
	}
		for (long int i = 5; i * i <= n; i += 6)
		{
			if (n % i == 0 || n % (i + 2) == 0)
				return (0);
		}
		return (0);
}

/**
 *
 *
