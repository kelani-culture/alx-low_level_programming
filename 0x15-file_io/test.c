#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include  <unistd.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd_open;
    ssize_t  bytes, count = 0, bytes_r;
    char *buffer;
    if (filename == NULL)
        return 0;
    fd_open = open(filename, O_RDONLY);
    if (fd_open == -1)
    {   
        close(fd_open);
        return 0;
    }
    buffer = malloc(sizeof(char) * letters);
    while((bytes_r = read(fd_open, buffer, letters)) > count)
    {
        bytes = write(STDOUT_FILENO, buffer, bytes_r);
        if (bytes == -1 || bytes != bytes_r)
        {
                close(fd_open);
                return 0;
        }

        count += bytes;
    }
    free(buffer);
    if (bytes_r == -1)
        return 0;
    close(fd_open);
    return count;
}
