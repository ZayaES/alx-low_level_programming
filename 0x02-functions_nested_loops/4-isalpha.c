/* #include "main.h" */

/**
 * _isalpha - Checks if input is a letter
 * @c: First operand
 *
 * Return: 1 if lowercase, 0 else
*/

int _isalpha(int c)
{
#include "main.h"

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
