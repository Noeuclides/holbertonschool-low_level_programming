#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"


/**
 * create_file - create a file
 *
 *@filename: name of the file to create
 *
 *@text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd, i, w;


	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; *(text_content + i) != '\0'; i++)
		;
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	return (1);

}
