#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the argument
 * @argc: counts number of argument
 * @argv: points to the argument strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) != 0)
	{
		argv[0] = argv[argc - 1];
	}
	printf("%d\n", argc);
	return (0);
}
