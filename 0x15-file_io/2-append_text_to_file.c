#include "holberton.h"
#include <string.h>

/**
 * append_text_to_file - add text to the end of the given file
 *
 * @filename : given name file
 * @text_content : text to write the file
 *
 * Return: 1-successfull -1-fail
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, file_write;

	if (!filename)
		return (-1);


	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	(text_content == NULL) ? text_content = "" : text_content;
	len = strlen(text_content);

	file_write = write(fd, text_content, len);

	if (file_write == -1)
		return (-1);

	return (1);

}
