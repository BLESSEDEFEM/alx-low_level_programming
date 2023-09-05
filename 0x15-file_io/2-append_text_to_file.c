#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist or the user lacks write permissions - -1. Otherwise - 1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, p = -1, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content || (p = write(fd, text_content, len)) != -1)
	{
		close(fd);
		return (1);
	}

	close(fd);
	return (-1);
}
