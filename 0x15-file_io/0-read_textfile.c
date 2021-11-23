#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read
 * @letters: n of letters
 * Return: n of printed char
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t out;
	int fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	out = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (fd == -1 || out == -1)
		return (0);
	close(fd);
	free(buf);
	return (out);
}
