#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - creates a file and writes content to it
* @filename: the name of the file to create
* @text_content: the content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t length = 0;

if (filename == NULL)
return (-1);

/* Calculate the length of text_content */
if (text_content != NULL)
{
while (text_content[length])
length++;
}

/* Open the file with write-only and create flags */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

/* Write the content to the file */
if (text_content != NULL)
{
bytes_written = write(fd, text_content, length);
if (bytes_written == -1 || bytes_written != (ssize_t)length)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
