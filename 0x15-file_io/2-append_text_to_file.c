#include "main.h"

/**
* append_text_to_file - a function that is self descriptive
* @filename: name of the file to be modified
* @text_content: the text to be appended to the file
*
* Return: success (1), failure (-1)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, characters = 0, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[characters])
			characters++;

		bytes_written = write(fd, text_content, characters);
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
