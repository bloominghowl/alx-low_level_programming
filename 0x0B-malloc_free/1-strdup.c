#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to copy a string on a new allocated memory
 * area
 * @str: string to copy
 *
 * Return: a pointer to the copied string
 */

char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (0);

	l = 0;
	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= l; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
