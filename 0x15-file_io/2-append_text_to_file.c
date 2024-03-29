#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
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

