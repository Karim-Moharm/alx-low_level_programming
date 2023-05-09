#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * main - program that copies the content of a file to another file
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	int close_from_ret;
	int close_to_ret;
	int count;

	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	count = read(fd_from, buffer, 1024);

	close_from_ret = close(fd_from);
	close_to_ret = close(fd_to);

	if (close_from_ret == -1 || close_to_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}

	return (0);
}
