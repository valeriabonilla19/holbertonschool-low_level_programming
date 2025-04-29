#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: the content to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t length = 0;

/* Check if the filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* If text_content is NULL, do nothing */
if (text_content != NULL)
{
/* Calculate the length of text_content */
while (text_content[length])
length++;

/* Write the content to the file */
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
