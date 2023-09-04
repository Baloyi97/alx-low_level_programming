#include "main.h"

/**
 * read_textfile - Reads and prints a text file to stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *  Return: 0 on failure or when filename is NULL; otherwise, the number
 *         of bytes successfully read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
