#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Number of letters read and printed, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, r, p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	p = write(STDOUT_FILENO, buf, r);
	if (p == -1 || p != r)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (p);
}
