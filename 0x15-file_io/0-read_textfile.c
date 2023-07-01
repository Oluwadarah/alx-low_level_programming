#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: g- actual number of bytes read and printed
 * return 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *but;
	ssize_t fd;
	ssize_t g;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	but = malloc(sizeof(char) * letters);
	t = read(fd, but, letters);
	g = write(STDOUT_FILENO, but, t);

	close(fd);
	free(but);
	return (g);
}
