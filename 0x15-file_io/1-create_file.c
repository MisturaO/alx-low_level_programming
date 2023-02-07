#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, s, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		s = write(fd, text_content, i);
		if (s != i)
			return (-1);
	}
	close(fd);

	return (1);
}
