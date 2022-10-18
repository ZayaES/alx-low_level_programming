#include "main.h"
/**
 * print_alphabet - Function to write lowercase alphabet
 *
 * Return: void
*/

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	_putchar('\n');
}
