#include "main.h"

/**
 * main - takes arguments, copies
 * @argc: arg count
 * @argv: argument string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);

	return (0);
}

/**
 * cp - copies file_from to file_to
 * @file_from: source
 * @file_to: dest
 * Return: void
 */

void cp(char *file_from, char *file_to)
{
	int fd, fd2, cl, cl2;
	ssize_t rd, wr;
	char *buf;

	rd = 0;
	buf = malloc(sizeof(char) * 1024);
	fd = open(file_from, O_RDWR);
	rd = read(fd, buf, 1024);
	if (rd < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0644);
	wr = write(fd2, buf, rd);
	if (wr < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_from);
		exit(99);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

