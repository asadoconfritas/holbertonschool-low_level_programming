#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Holberton School project
 * Return: always 0
 **/
 int main(void)
 {
                 int n, ld;
		 srand(time(0));
                        n = rand() - RAND_MAX / 2;
                        (ld = n % 10)
                        printf("Last digit of %d is %d and is 0\n", n, ld)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld)
			return (0);
}                                                 
