#include "main.h"
/**
 * create_file - Creates a file
 * @filename: Address of file to be created
 * @text_content: Address of string to be written in the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, i;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	i = 0;
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
	close(fd);
	return (1);
}
