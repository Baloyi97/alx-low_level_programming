#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
int o, w;
size_t len = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
len = strlen(text_content);

o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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