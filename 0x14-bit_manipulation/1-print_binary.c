#include "main.h"

void print_binary(unsigned long int n)
{
	char binary;
	char empty = '';

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if ((n & 1) == 0)
		{
			binary = '0';
		}
		else
		{
			binary = '1';
		}
		_putchar(binary);
		n = n >> 1;
	}
}
