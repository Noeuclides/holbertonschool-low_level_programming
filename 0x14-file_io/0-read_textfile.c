#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 *
 *@filename: name of the file to read
 *
 *@letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n,  w;
	char *p;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	p = malloc(sizeof(char) * letters);
	if (!p)
	{
		free(p);
		close(fd);
		return (0);
	}
	n = read (fd, p, letters);
	if (n == -1)
		return (0);

	w = write(STDOUT_FILENO, p, n);
	if (w == -1)
		return (0);
	free(p);
	close(fd);
	return (n);
}
