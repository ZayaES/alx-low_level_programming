#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - finds minimem count of coin
 * @argc: argument count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent [5] = {25, 10, 5, 2, 1};
	int i;
	int change;
	int n;

	change = atoi(argv[1]);
	n = 0;
	i = 0;

	if (argc == 2)
	{
		if (change > 0)
		{
			while (change != 0)
			{
				n = n + change / cent[i];
				change = change % cent[i];
				i++;
			}
			printf("%d\n", n);
		}
		else
		{
			printf("0\n");
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
