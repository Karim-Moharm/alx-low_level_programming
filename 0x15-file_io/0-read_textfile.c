#include "main.h"

/**
  * read_textfile - reads a text and prints it to POSIX
  * @filename: name of the file
  * @letters: number of letters it should read and print
  * Return:  the actual number of letters it could read and print
  * if file cannot be opend return 0
  * if filename is NULL return
  * if write fails or does not write the expected amount of bytes, return 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	char *buffer = NULL;
	int count = 0;
	int write_ret;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, buffer, letters);
	if (count < 0)
	{
		free(buffer);
		return (0);
	}

	write_ret = write(STDOUT_FILENO, buffer, count);
	if (write_ret < 0)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (write_ret);
}

