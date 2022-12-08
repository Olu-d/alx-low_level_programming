#include<stdlib.h>

/**
 * create_file - A function that creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 */

int create_file(const char *filename, char *text_context)
{
	int fd;

	/* open the file */
	fd = open(filename
