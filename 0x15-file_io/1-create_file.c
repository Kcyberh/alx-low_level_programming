#include "main.h"

/**
 * _strlen - the length of a string
 * @str: pointer to the string
 *
 * Return: length of string
 */

size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * create_file - creates a file
 * @filename: name of the file to created
 * @text_content: NULL terminated string to write to the file
 * Return: 1(Succes), -1(failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	len = write(fn, text_content, _strlen(text_content));
	close(fn);
	if (len == -1)
	return (-1);
	return (1);
}
