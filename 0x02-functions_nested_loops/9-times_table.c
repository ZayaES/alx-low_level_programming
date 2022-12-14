/* #include "main.h" */
/**
 * times_table - prints time table
 *
 * Return: 1 if lowercase, 0 else
 */

void times_table(void)
{
#include "main.h"

	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			print(c * i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
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
	if (n < 10)
	{
		_putchar(' ');
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
