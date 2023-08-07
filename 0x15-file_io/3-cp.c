#include "main.h"
#include <stdio.h>

#define S_E STDERR_FILENO

/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int fd_input, fd_output, r_count, w_count, close_input, close_output;
	char buff[1024];

	if (argc != 3)
		dprintf(S_E, "Usage: cp file_from file_to\n"), exit(97);

	fd_input = open(argv[1], O_RDONLY);
	if (fd_input == -1)
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_output = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_output == -1)
		dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);

	r_count = read(fd_input, buff, 1024);
	if (r_count == -1)
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]), exit(98);

	while (r_count > 0)
	{
		w_count = write(fd_output, buff, (ssize_t) r_count);
		if (w_count == -1)
		{
			dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		r_count = read(fd_input, buff, 1024);
	}

	close_input = close(fd_input);
	if (close_input == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", fd_input), exit(100);

	close_output = close(fd_output);
	if (close_output == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", fd_output), exit(100);

	return (0);
}
