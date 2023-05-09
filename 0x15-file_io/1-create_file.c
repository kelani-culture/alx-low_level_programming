#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 * create_file - Creates a file with the specified name and writes the
 *               given string to it. If the file already exists, its contents
 *               are truncated.
 *
 * @filename: The name of the file to create.
 * @text_content: The string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if  (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content == NULL)
		text_content = "";

	if (access(filename, F_OK) == -1)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		if (fd == -1)
		{	close(fd);
			return (-1);
		}
	}
	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
