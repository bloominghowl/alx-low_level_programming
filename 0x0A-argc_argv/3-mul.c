#include "main.h"
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int m = 0;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", m);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
