#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: File.
 * @text_content: Text to be printed in the file.
 * Return:1 on success, -1 on failure1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, d, i;


	if (filename == NULL)
		return (-1);

	f = open(filename, O_APPEND | O_TRUNC);

	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	d = write(f, text_content, i);
	if (d == -1)
	{
		close(f);
		return (1);
	}

	close(f);
	return (1);
}
