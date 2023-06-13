#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create and text_content
 * is a NULL terminated string to write to the file
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure or filename is NULL
 */

int create_file(const char *filename, char *text_content)

{
	int fd, w, dist = 0;

	if (text_content != NULL)
	{
		for (dist = 0; text_content[dist];)
			dist++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, dist);

	if (filename == NULL)
		return (-1);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
