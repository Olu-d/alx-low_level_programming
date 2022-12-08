#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates a file
 * @filename: Name of the file to create
 * @text_context: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 */

int create_file(const char *filename, char *text_context)
{
	int fd;

	if (filename == NULL)
		return (-1);


	/* open the file */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if(fd == -1)
		return (-1);

	write(fd, text_context, strlen(text_context));

	/*write(2, text_context, strlen(text_context));*/

	close (fd);

	return (1);
}
