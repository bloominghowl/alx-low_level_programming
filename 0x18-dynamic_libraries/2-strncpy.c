#include "main.h"

/**
 * _strncpy - function that coppies a sring.
 * @src: pointer of char
 * @dest: pointer of char
 * @n: integer
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

			dest[i] = '\0';
	}
	return (dest);
}
