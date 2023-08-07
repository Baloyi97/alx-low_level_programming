#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *If the file does not exist the user lacks write permissions - -1.
 *Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w;
size_t len = 0;

if (filename == NULL)
	return (-1);

if (access(filename, F_OK) == -1)
{
	perror("File does not exist");
	return (-1);
}

if (text_content != NULL)
	len = strlen(text_content);

o = open(filename, O_WRONLY | O_APPEND);
if (o == -1)
return (-1);

w = write(o, text_content, len);
if (w == -1)
{
	close(o);
	return (-1);
}

if (close(o) == -1)
	return (-1);

return (1);
}
