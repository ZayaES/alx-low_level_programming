#include "main.h"

/**
 * get_endianness - find endianness of a system
 * Return: 0 (little endian), 1 (big endian)
 */

int get_endianness(void)
{
	int x = 0x3456;

	char *c = (char*) &x;

	if (*c == 0x56)
		return (1);
	else
		return (0);
}
