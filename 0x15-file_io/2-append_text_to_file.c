#include"main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
#include<stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add
 *
 * Return: 1 on success; -1 on failure
 * -1 if filename is NULL
 *
 * Description:
 * Do not create file it it does not exist
 * if text_content is NULL, do not add anything to the file. Return 1 if the
 * file exists and -1 if the file does not exist or you don't have
 * the required permissions to write to the file.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd = 0;
	int wr_status = 0;

	/* open the file */
	fd = open(filename, O_WRONLY | O_APPEND);

	/* conditions */
	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)



	/* write to the file with append flags */
	wr_status = write(fd, text_content, sizeof(text_content));
	if (wr_status == -1 || wr_status == 13 || wr_status == 9)
		return (-1);

	/* other conditions */

	/*close the file */
	close(fd);

	return (1);



}
