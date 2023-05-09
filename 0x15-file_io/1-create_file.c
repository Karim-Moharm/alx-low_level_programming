#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of file
  * @text_content: string
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_ret;

	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd < 0)
		return (-1);

	write_ret = write(fd, text_content, _strlen(text_content));

	if (write_ret < 0)
		return (-1);
	close (fd);

	return (1);
}

/**
  * _strlen: string length
  * @s: string
  * Return: length of string
  */

size_t _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
