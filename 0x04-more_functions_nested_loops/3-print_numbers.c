#include "main.h"
/**
 * print_numbers -  prints numbers from 0 to 9, followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
		c++;
	}

	_putchar('\n');
}
