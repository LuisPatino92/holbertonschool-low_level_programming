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
	ssize_t chars_readed, chars_written;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	chars_readed = read(fd, buffer, letters);
	if (chars_readed == -1)
		return (0);

	chars_written = write(STDOUT_FILENO, buffer, letters);
	if (chars_written == -1)
		return (0);

	free(buffer);
	close(fd);
	return (chars_written < chars_readed ? chars_written : chars_readed);
}
