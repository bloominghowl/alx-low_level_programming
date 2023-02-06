#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - funtion that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 *
 * Return: the actual number of letters it could
 * read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
