#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
 * main - Entry ppoint
 * @ac: argument aount
 * @av: pointer to each files
 * Return: 0 success and error code on failure
 */

int copy_content(char *file_from, char *file_to);

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content(av[1], av[2]);
	return (0);
}

/**
 * copy_content - Copies the content of one file to another file
 *
 * @file_from: The name of the source file
 * @file_to: The name of the destination file
 *
 * Return: 0 on success, otherwise exits with error codes
 */
int copy_content(char *file_from, char *file_to)
{
	int fd_to, fd_from;
	ssize_t bytes_write, bytes_read;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buf, sizeof(buf))) > 0)
	{
		bytes_write = write(fd_to, buf, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
