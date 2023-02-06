#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == 0)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[c] != 0)
			c++;
		b = write(a, text_content, c);

		if (b == -1)
			return (-1);
	}

	close(a);
	return (1);
}
