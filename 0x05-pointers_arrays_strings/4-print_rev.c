#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: would be reversed string
 */

void print_rev(char *s)
{
	int length = 0, a;

	while (s[a++])
		length++;

	for (a = length - 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
