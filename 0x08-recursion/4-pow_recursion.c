#include "main.h"

/**
 * _pow_recursion - function to return the value of x raised to the power y
 * @x: first integer
 * @y: second integer
 *
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	int pw = 1;

	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	pw = _pow_recursion(x, y - 1);
	return (pw * x);
}
