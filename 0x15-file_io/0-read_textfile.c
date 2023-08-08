#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: Num of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	op = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (op == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(op);
	return (wr);
}
