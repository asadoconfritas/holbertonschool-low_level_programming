#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int to return
 * Return: end product
 **/

int _isalpha(int c)

{
	return ((((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))));
}
