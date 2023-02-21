#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @ab: integer input
 * Return: Always 0.
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

