#include "holberton.h"
/**
 * create_file - Function that creates a file.
 * @filename: File.
 * @text_content: Text to be printed in the file.
 * Return:1 on success, -1 on failure1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, s, i;


	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY, 0600);

	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	s = write(f, text_content, i);
	if (s == -1)
	{
		close(f);
		return (0);
	}

	close(f);
	return (1);
}
