#include "main.h"

/**
* create_file - a function that creates a file
* @filename: the name of the file to be created
* @text_content: the content to be written into file
*
* Return: success (1), failure (-1)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, characters = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[characters])
		characters++;

	bytes_written = write(fd, text_content, characters);

	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
