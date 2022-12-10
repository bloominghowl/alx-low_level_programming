#include <stdio.h>
/**
 * main -print the lowercase alphabets in reverse
 *Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');
	return (0);
}
