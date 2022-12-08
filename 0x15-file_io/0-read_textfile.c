#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * read_textfile - A function that read a text file and prints it to the
 * POSIX standard output
 * @filename: name of file to be printed
 * @letters: number of letters if should read and print
 *
 * Return: actual number of letters it could read and print
 * 0, if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amounts of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count_read, count_write;
	char *c = malloc(letters * sizeof(char));

	/* open the file */
	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	/* call read to buffer */
	count_read = read(fd, c, letters);
	c[count_read] = '\0';

	/* close the file */
	close(fd);

	/* write to stdout */
	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	count_write = write(STDOUT_FILENO, c, letters);
	if (count_write == -1)
		return (0);

	close(fd);

	return (count_read);


}
