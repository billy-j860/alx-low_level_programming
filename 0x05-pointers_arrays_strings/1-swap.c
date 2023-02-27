/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: integer to swap
 * @b: second integer to swap
 * Return: value of integer swapped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
