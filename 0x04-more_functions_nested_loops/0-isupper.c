#include "main.h"

/**
 * _isupper - function for uppercase character
 * @c: char to check
 * Return: 1 if c is upercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
