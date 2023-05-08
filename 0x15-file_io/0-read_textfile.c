#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if the file can not be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open;
	ssize_t  bytes, bytes_r, total_bytes;
	char *buffer;

	if (filename  == NULL)
		return (0);

	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
	{
		close(fd_open);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd_open);
		return (0);
	}
	while ((bytes_r = read(fd_open, buffer, letters)) > total_bytes)
	{
		bytes = write(STDOUT_FILENO, buffer, bytes_r);
		if (bytes == -1 || bytes != bytes_r)
		{
			close(fd_open);
			return (0);
		}
		total_bytes += bytes;
	}
	free(buffer);
	if (bytes_r == -1)
	{
		close(fd_open);
		return (0);
	}

	close(fd_open);
	return (total_bytes);
}
