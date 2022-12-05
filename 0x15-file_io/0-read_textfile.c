#include "main.h"

/**
 * read_textfile - reads a file then prints to standard output
 * @filename: name of file to read
 * @letters: number of byte to read
 * Return: number of lines it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	ssize_t count;
	char *buf;

	buf = malloc(sizeof(char) * (letters));
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0644);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	close(fd);

	count = write(1, buf, letters);
	if ((size_t) (count) != (letters))
		return (0);

	return (rd);
}
