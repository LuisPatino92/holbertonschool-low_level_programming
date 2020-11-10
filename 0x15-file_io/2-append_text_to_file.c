#include "holberton.h"

int length(char *str);

/**
 * append_text_to_file - Appends text at the end of the file
 *
 * @filename: The name for the created filename
 * @text_content: The text to write inside the file
 *
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

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
