/* #include "main.h" */

/**
 * print_sign - Checks if input is posirive, zero or negative
 * @n: First operand
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
*/

int print_sign(int n)
{
#include "main.h"

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n = 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
