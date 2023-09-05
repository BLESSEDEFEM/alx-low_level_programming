#include "main.h"

/**
 * append_text_to_file - function to append text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist or the user lacks write permissions - -1.
 * Otherwise - 1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, p, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
		p = write(fd, text_content, len);
		if (p == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
