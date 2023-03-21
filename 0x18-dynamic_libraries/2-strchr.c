#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: character to be found
 * @s: string to check
 *
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
