#include "main.h"
/**
 * times_table - print the 9 times table
 * return: 0 Always (success)
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; b <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = (a * b);
			if ((c / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (b < 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
