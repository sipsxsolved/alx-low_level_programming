#include "main.h"

/**
* read_textfile - a function that reads a text file
* and prints it to stdout
* @filename: name of the file to read from
* @letters: number of letters to read and print
*
* Return: the actual number of letters it read and printed.
* if there is a n error, return (0)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* create a pointer to the file */
	ssize_t bytes_read, bytes_written;
	/* var to hold file descriptor */
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open file with read only flag and assign the file desc. */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	close(fd);
	free(buffer);
	return (bytes_written);
}
