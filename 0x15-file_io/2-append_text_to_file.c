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
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, len, w_count;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
	{
		return (-1);
	}
	len = _strlen(text_content);
	w_count = write(fildes, text_content, len);
	if (w_count == -1)
	{
		return (-1);
	}
	close(fildes);
	return (1);

}
