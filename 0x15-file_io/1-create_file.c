#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to the string to write to the file.
 * Return: If the function fails - -1.  Otherwise - 1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, p, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	p = (text_content) ? write(fd, text_content, len) : 0;

	close(fd);

	return ((p == -1) ? (-1) : 1);
}
