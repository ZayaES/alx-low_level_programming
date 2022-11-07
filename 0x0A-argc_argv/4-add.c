#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments to the function
 * @argc: counts number of argument
 * @argv: points to the argument strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 1;

	int x = 0;

	while (i < argc)
	{
		if (atoi(argv[i]) >= 0)
		{
			x = x + atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc >= 1)
	{
		printf("%d\n", x);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
