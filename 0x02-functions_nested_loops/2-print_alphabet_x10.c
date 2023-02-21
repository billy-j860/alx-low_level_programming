#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int l, k;

	k = 0;
		while (k < 10)
		{
			for (l = 'a'; l <= 'z'; l++)
			{
			_putchar(l);
			}
		k++;
		_putchar('\n');
		}
}

