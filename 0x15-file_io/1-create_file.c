#include "holberton.h"
#include <string.h>

/**
 * create_file - read the given file
 *
 * @filename : given name file
 * @text_content : text to write the file
 *
 * Return: 1-successfull -1-fail
 *
 */


int create_file(const char *filename, char *text_content)
{
	int fd, len, file_write;

	if (!filename)
		return (0);


	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	(text_content == NULL) ? text_content = "" : text_content;
	len = strlen(text_content);

	file_write = write(fd, text_content, len);

	if (file_write == -1)
		return (-1);

	return (1);

}
