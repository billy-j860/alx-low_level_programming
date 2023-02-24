#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

