#include "main.h"
#define  BUFRSIZE 1204
#define ER STDERR_FILENO

/**
 * copy_file - copy the file to another file
 * @file1: file to copy from
 * @file2: file to copy to
 * Return: exit on failure
 */

void copy_file(const char *file1, char *file2)
{
	ssize_t count, count_out;
	int fl1, fl2, fc1, fc2;
	char bufr[BUFRSIZE];
	mode_t mode;

	fl1 = open(file1, O_RDONLY);
	if (fl1 == -1)
	{
		dprintf(ER, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fl2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fl2 == -1)
		dprintf(ER, "Error: Can't write to %s\n", file2), exit(99);
	count = 1;
	while (count > 0)
	{
		count = read(fl1, bufr, BUFRSIZE);
		if (count == -1)
		{
			dprintf(ER, "Error: Can't read from file %s\n", file1);
			exit(98);
		}
		if (count > 0)
		{
			count_out = write(fl2, bufr, count);
			if (count_out == -1)
			{
				dprintf(ER, "Error: Can't write to %s\n", file2);
			       exit(99);
			}
		}
	}
fc1 = close(fl1);
if (fc1 == -1)
	dprintf(ER, "Error: Can't Close fn %d\n", fc1), exit(100);
fc2 = close(fl2);
if (fc2 == -1)
	dprintf(ER, "Error: Can't Close fn %d\n", fc2), exit(100);
}

/**
 * main - copies the content of a file to another file
* @argc: number of arguements
* @argv: pointer to arguement
* Return: 0 on success, or exit with error message
**/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(ER, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
