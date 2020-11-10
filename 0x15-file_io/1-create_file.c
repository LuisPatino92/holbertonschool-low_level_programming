#include "holberton.h"

int length(char *str);

/**
 * create_file - Creates a file with desired text inside
 *
 * @filename: The name for the created filename
 * @text_content: The text to write inside the file
 *
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		written = write(fd, text_content, length(text_content));

	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}


/**
 * length - Measure the length of a string
 *
 * @str: The string whose length is needed
 *
 * Return: The length of the string (number of elements)
 */

int length(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i); i++)
		;

	return (i);
}
