#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (a == 0)
	{
		printf("and id 0\n");
	}
	else if (a < 6)
	{
		printf("and is less than 6 and not 0/n");
	}
	return (0);
}
