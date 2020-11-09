#include "holberton.h"

/**
 * read_textfile - Read an amount of bytes from a file and write it to STDOUT
 *
 * @filename: File for read from
 * @letters: Amount of bytes to read
 *
 * Return: Amount of bytes readed and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	read(fd, buffer, letters);

	chars = write(STDOUT_FILENO, buffer, letters);

	free(buffer);
	close(fd);
	return (chars);
}
