#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 *@filename: name of the file
 *
 *@text_content: string to add at the end of the file
 *
 * Return: 1 when success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	return (1);
}
