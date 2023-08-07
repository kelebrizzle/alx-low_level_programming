#include "main.h"

/**
 * read_textfile - reads a text file to the standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of bytes written to the stdout
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buff;
	ssize_t r_count, w_count;

	fildes = open(filename, O_RDONLY);

	if (filename == NULL || fildes == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	r_count = read(fildes, buff, letters);
	if (r_count == -1)
	{
		return (0);
	}
	w_count = write(STDOUT_FILENO, buff, r_count);
	if (w_count == -1 || w_count != r_count)
	{
		return (0);
	}

	free(buff);
	close(fildes);

	return (w_count);
}
