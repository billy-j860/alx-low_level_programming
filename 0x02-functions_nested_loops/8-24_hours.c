#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * k = hour, l = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int k, l;

	for (k = 0; k < 24; k++)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
		}
	}
}
