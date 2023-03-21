#include "main.h"
/**
 * _abs - computes the absolute value of integer
 * @bc: integer input
 * Return: absolute value value of bc
 */
int _abs(int bc)
{
	return (bc * ((bc > 0) - (bc < 0)));

}
