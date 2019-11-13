#include "holberton.h"
/**
 * main - Program that copies the content of a file to another file.
 * @argc: Argc.
 * @argv: Argv.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int one, two, i, j;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	one = open(argv[1], O_RDONLY);
	if (one == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	two = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (two == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
	i = read(one, buffer, 1024);
	j = write(two, buffer, i);
	} while (i > 0);
	if (i == -1)
        {dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	if (j <= -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(one) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", one), exit(100);
	if (close(two) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", two), exit(100);
	return (0);
}
