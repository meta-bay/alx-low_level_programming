#include "main.h"

/**
 * read_textfile- prints file to STDOUT.
 * @filename: text file
 * @letters: letters to be read
 * Return: 0 or 1.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *sfc;
	ssize_t fd;
	ssize_t to_write;
	ssize_t to_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sfc = malloc(sizeof(char) * letters);
	to_read = read(fd, sfc, letters);
	to_write = write(STDOUT_FILENO, sfc, to_read);

	free(sfc);
	close(fd);
	return (w);
}
