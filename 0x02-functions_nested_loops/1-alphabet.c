#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

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
		_putchar(n);
	}
	_putchar('\n');
}
