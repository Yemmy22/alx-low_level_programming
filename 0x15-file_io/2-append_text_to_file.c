#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Address of file to be appended
 * @text_content: Address of string to append
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, i;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
	{
		if (access(filename, W_OK) != 0)
			return (-1);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	}
	else
		return (-1);
	if (text_content != NULL)
	{
		i = 1;
		while (text_content[i] != '\0')
		{
			i++;
		}
		wrt = write(fd, text_content, i);
		if (wrt == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
