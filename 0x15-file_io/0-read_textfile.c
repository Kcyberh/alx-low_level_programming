#include "main.h"

/**
 * read_textfile - reads a file an prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letter it reads and prints
 * Return: the actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fn);
		return (0);
	}
	lr = read(fn, buffer, letters);
	close(fn);
	if (lr == -1)
	{
		free(buffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	if (lr != lw)
	return (0);
	return (lw);
}
