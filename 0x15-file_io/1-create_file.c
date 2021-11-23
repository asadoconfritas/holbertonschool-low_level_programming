#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: of the file
 * @text_content: string to write
 * Return: end program
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int vl = 0;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || !filename)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		vl = write(fd, text_content, len);
	}
	close(fd);
	if (vl != len)
		return (-1);
	return (1);
}
