#include "holberton.h"
/**
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, d, s;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);

	if (filename == NULL)
	{
		return (-1);
	}

	if (buffer == NULL)
        {
                return (-1);
        }

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		close(f);
		return (-1);
	}

	d = read(f, buffer, letters);

	if (d == -1)
	{
		free(buffer);
		close(f);
		return (-1);
	}

	s = write(STDOUT_FILENO, buffer, d);

	if (s == -1)
	{
		free(buffer);
		close(f);
		return (-1);
	}
	free(buffer);
	close(f);
	return (s);
}
