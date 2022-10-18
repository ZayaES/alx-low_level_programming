/* #include "main.h" */

/**
 * print_alphabet - Function to write lowercase alphabet
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
#include "main.h"

	char n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
	}
}
