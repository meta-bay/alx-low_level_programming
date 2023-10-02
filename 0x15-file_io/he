#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the filename
 * @text_content: pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
        int fd, to_write, length = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (length = 0; text_content[length];)
                        length++;
        }

        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        to_write = write(fd, text_content, length);

        if (fd == -1 || to_write == -1)
                return (-1);

        close(fd);

        return (1);
}
