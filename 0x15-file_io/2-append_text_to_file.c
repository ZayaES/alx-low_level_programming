#include "main.h"

/**
 * append_text_to_file - appends text to existing file
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr < 0 || (size_t) (wr) < strlen(text_content))
		return (-1);

	close(fd);

	return (1);
}
