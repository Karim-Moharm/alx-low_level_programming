#include "main.h"
/**
  * append_text_to_file - append text to file
  * @filename: name of the file
  * @text_content: string tobe appended
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int write_ret;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (fd == -1)
		return (-1);
	
	if (text_content == NULL)
		return (1);

	while (text_content && *(text_content + len))
		len++;

	write_ret = write(fd, filename, len);
	if (write_ret < 0)
		return (-1);
	
	close (fd);

	return (1);


}

