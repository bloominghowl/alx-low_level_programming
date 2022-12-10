#include <stdio.h>
/**
 * main - print all numbers of base 1
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lc;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
