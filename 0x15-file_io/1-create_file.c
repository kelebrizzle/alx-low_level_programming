#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: the string
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file and writes into it
 * @filename: filename
 * @text_content: text content of file
 * Return: 1 on success, -1 if fail
*/

int create_file(const char *filename, char *text_content)
{
	int fildes, len, w_count;

	if (filename == NULL)
	{
		return (-1);
	}

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = _strlen(text_content);
	}

	w_count = write(fildes, text_content, len);
	if (w_count == -1)
	{
		return (-1);
	}
	close(fildes);
	return (1);
}
