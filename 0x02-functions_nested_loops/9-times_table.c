/* #include "main.h" */
/**
 * times_table - prints time table
 *
 * Return: 1 if lowercase, 0 else
 */

void times_table(void)
{
#include "main.h"

	char i;
	char d;
	char c;

	d = 5;

	for (i = 0; i < 8; i++)
	{
		c = d * i;
		_putchar('0' + c);
		_putchar(',');
		_putchar(' ');
	}
	c = 9 * 9;
	_putchar(c);
	_putchar('$');
}
