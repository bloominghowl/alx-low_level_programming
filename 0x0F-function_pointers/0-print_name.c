#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function wit char parameter
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if(f != 0)
		f(name);
}
