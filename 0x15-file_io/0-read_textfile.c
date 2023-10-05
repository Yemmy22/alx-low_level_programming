#include "main.h"
/**
 * read_textfile - Reads a file and prints it to stdout
 * @filename: Address of te file to be read
 * @letters: Number of characters to be read
 *
 * Return: The number of characters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wrt, rd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wrt = write(STDOUT_FILENO, buf, rd);
	if (wrt == -1 || wrt < rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (wrt);
}
