#include "holberton.h"

/**
 * read_textfile - read the given file
 *
 * @filename : given file
 * @letters : number of letters
 *
 * Return: printed chars
 *
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t st;
	int file_read, file_write;
	char *file;

	if (!filename)
		return (0);

	file = malloc(sizeof(char) * letters);

	if (file == NULL)
		return (-1);

	st = open(filename, O_RDONLY);

	if (st == -1)
		return (0);

	file_read = read(st, file, letters);

	if (file_read == -1)
		return (0);

	file_write = write(1, file, file_read);

	if (file_write == -1)
		return (0);

	close(st);

	free(file);
	return (file_read);

}
