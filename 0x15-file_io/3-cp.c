#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * main - program that copies the content of a file to another file
  * @ac: argument count
  * @av: argument vector
  * Return: Always 0
  */

int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open("file_from", O_RDONLY);
	fd_to = open("file_to", O_WRONLY | O_CREAT | O_TRUNC, 0664);

}
