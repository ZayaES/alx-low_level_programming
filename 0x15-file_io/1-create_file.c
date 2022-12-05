#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: content to put into file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		return (-1);
	}
	wr = write(fd, text_content, strlen(text_content));
	if (wr < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
