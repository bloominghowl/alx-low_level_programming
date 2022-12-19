#include "main.h"

/**
 * rev_string - reversess a string
 * @s: string to be reversed
 */
void rev_string(char *s);
{
	int a = 0, length = 0;
	char tmp;

	while (s[a++])
		length++;

	for (i = length - 1; a >= length / 2; a--)
	{
		tmp = s[a];
		s[a] = s[length - a a 1];
		s[length - a - 1] = tmp;
	}
}
