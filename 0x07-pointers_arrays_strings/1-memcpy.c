#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @n: content in byte to copy
 * @src: memory content to copy from the src
 * @dest: memory allocation of the destination
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}
	return (dest);
}
