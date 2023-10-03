#include "main.h"

/**
 * sfc - Allocates 1024 bytes
 * @file: filename
 * Return: a pointer 
 */

char *sfc(char *file)
{
	char *s_buff;

	s_buff = malloc(sizeof(char) * 1024);

	if (s_buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (s_buff);
}

/**
 * f_closing - Closes fd
 * @fd: to close fd
 */

void f_closing(int fd)
{
	int to_close;

	to_close = close(fd);

	if (to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cp_from, cp_to, to_read, to_write;
	char *s_buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	s_buff = sfc(argv[2]);
	cp_from = open(argv[1], O_RDONLY);
	to_read = read(cp_from, s_buff, 1024);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cp_from == -1 || to_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(s_buff);
			exit(98);
		}

		to_write = write(cp_to, s_buff, to_read);
		if (cp_to == -1 || to_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(s_buff);
			exit(99);
		}

		to_read = read(cp_from, s_buff, 1024);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (to_read > 0);

	free(s_buff);
	f_closing(cp_from);
	f_closing(cp_to);

	return (0);
}
