#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nlr: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nlr)
{
	int nl;

	nl = (nlr % 10);
	if (nl < 0)
	{
		nl = (-1 * nl);
	}
	_putchar(nl + '0');
	return (nl);
}
