/* #include "main.h" */

/**
 * print_last_digit - Function to print last digit of integer
 * @n: Fist argument
 *
 * Return: last digit of integer
*/

int print_last_digit(int n)
{
#include "main.h"

	int c;

	if (n < 0)
		n = -1 * n;
	c = n % 10;
	_putchar('0' + c);
	return (c);
}
