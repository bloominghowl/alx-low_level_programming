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
	char *pointeur;
	int i;
	int count = 0;

	if (str == NULL)
	return (NULL);
	while (*(str + count))
		count++;

	if (pointeur == NULL)
		return (NULL);
	i = 0;
	while (i <= count)
	{
		*(pointeur + i) = *(str + i);
		i++;
	}
	return (pointeur);
}
