#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: occurrence to find
 * @haystack: string to search
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *subst = needle;

		while (*haystack && *subst && *haystack == *subst)
		{
			haystack++;
			subst++;
		}
		if (!*subst)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
