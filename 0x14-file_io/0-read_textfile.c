#include "holberton.h"
#include <fcntl.h>

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
	ssize_t fd, n;


	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	if (filename == NULL)
		return (0);
	n = read (fd, filename, letters);


	return (n);

}
