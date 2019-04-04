#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * copy_files - function that copies a file to another
 *
 *@file_from: file we need to copy
 *
 *@file_to: new file with the copy
 *
 *Return: 0 when success
 */

int copy_files(const char *file_from, const char *file_to, int fd1, int fd2)
{
	int r, w, c;
	char buf[1024];

	r = read(fd1, buf, 1024);
	while (r != 0)
	{
		w = write(fd2, buf, r);
		if (w == -1)
		{
			c = close(fd2);
			if (c == -1)
			{
				dprintf(2, "Error: Can't close fd %i\n", fd1);
				exit(100);
			}
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		r = read(fd1, buf, 1024);
		if (r == -1)
		{
			c = close(fd1);
			if (c == -1)
			{
				dprintf(2, "Error: Can't close fd %i\n", fd1);
				exit(100);
			}
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	c = close(fd1);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	c = close(fd2);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	return (0);
}

/**
 * main - call copy function
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments (filenames)
 *
 *Return: 0 when success
 */


int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	copy_files(argv[1], argv[2], fd1, fd2);

	return (0);
}
