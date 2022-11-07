#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments to the function
 * @argc: counts number of argument
 * @argv: points to the argument strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i= 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
