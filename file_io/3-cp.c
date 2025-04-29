#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* main - copies the content of one file to another
* @argc: number of arguments
* @argv: arguments array
* Return: 0 on success, exit with error codes on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)  /* Check for correct number of arguments */
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

/* Open the source file (file_from) */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Open the destination file (file_to) with truncation and write permission */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
exit(99);
}

/* Read from file_from and write to file_to */
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

/* Check if there was an error during reading */
if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}

/* Close file descriptors */
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
