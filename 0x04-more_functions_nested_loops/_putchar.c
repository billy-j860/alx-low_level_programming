#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Thecharacter to print
 *
 * Return: 1 if true 0 if false
 * On error, -1 is returned and ermo is set appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
