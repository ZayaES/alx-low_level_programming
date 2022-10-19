/* #include "main.h" */
/**
 * print_to_98 - add 2 numbers
 * @n: First operand
 *
 * Return: 1 if lowercase, 0 else
 */

void print_to_98(int n)
{
#include "main.h"

	if (n <= 98)
	{
		for (; n <= 97; n++)
		{
			print(n);
			_putchar(',');
			_putchar(' ');
		}
		print(98);
	}
	else if (n > 98)
	{
		for (; n >= 99; n--)
		{
			print(n);
			_putchar(',');
			_putchar(' ');
		}
		print(98);
	}
	_putchar('\n');
}

/**
 * print - print numbers
 * @n: First operand
 *
 * Return: 1 if lowercase, 0 else
 */

void print(int n)
{
#include "main.h"

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
