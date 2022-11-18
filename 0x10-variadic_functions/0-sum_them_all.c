#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include "variadic_functions.h"
#include <stdarg.h>
#endif

/**
 * sum_them_all - sums all int optional argent passed into it
 * @n: number of input
 * @
 * Return: int answer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
