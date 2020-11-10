#include "holberton.h"

int length_of_file(char *File_Name);
int length(char *str), i;
void failed(int error, char *file);

/**
 * main - Makes a copy of a file
 *
 * @ARGC: The number of arguments
 * @ARGV: The arguments
 *
 * Return: 0 on success, other values on fail
 */

int main(int ARGC, char **ARGV)
{
	int file_from, file_to, length_File;
	ssize_t readed = 1024, written;
	char buf[1024];

	length_File = length_of_file(ARGV[1]);

	if (ARGC != 3)
		failed(97, NULL);

	file_from = open(ARGV[1], O_RDWR, 664);
	if (file_from == -1)
		failed(98, ARGV[1]);

	file_to = open(ARGV[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	if (file_to == -1)
		failed(99, ARGV[2]);

	for (i = 0; i <= length_File / 1024; i++)
	{
		readed = read(file_from, buf, 1024);
		if (readed == -1)
			failed(98, ARGV[1]);
		printf("entramos papu %d", length_File);
		written = write(file_to, buf, readed);
		if (written == -1)
			failed(99,  ARGV[2]);
	}

	close(file_from);
	close(file_to);
	return (0);
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

/**
 * length_of_file - Measure the length of a file
 *
 * @File_Name: The file to be measured
 *
 * Return: The length of the string (number of elements)
 */

int length_of_file(char *File_Name)
{
	int i, fd;
	char byte = 0;
	ssize_t readed = 1;

	fd = open(File_Name, O_RDONLY);

	for (i = 0; readed == 1; i++)
	{
		readed = read(fd, &byte, 1);
	}
	close(fd);
	return (i - 1);
}

/**
 * failed - Manages the failures
 *
 * @error: The desired error status
 * @file: The filename to error status
 *
 */

void failed(int error, char *file)
{
	if (error == 97)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
	}
	else if (error == 98)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", 28);
		write(STDERR_FILENO, file, length(file));
		write(STDERR_FILENO, "\n", 1);
	}
	else if (error == 99)
	{
		write(STDERR_FILENO, "Error: Can't write to ", 22);
		write(STDERR_FILENO, file, length(file));
		write(STDERR_FILENO, "\n", 1);
	}

	exit(error);
}
