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
	char c;

	for (i = 0; i < 8; i++)
	{
		c = 9 * i;
		_putchar(c);
		_putchar(',');
		_putchar(' ')
	}
	c = 9 * 9;
	_putchar(c);
	_putchar('$');
}
