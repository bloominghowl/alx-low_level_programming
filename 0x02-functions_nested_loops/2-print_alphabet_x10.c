#include "main.h"
/**
 *print_alphabet_x10 - print alphabet 10x
 *
 * Return: 0 Always(success)
 */
void print_alphabet_x10(void)
{
	int a, ab;

	ab = 0;

	while (ab < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		ab++;
		_putchar('\n');
	}
}
