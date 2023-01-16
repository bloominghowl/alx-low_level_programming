#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 *
 * Return: 0 if success, 1 if error
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}