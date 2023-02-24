#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b[] = "Fizz";
	char c[] = "Buzz";
	char d[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", c);
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s ", d);
		else if (a % 3 == 0)
			printf("%s ", b);
		else if (a % 5 == 0)
			printf("%s ", c);
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
