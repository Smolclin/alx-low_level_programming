#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file
 * to be created
 * @text_content: the content of the
 * file
 * Return: 1 if success -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fr, noletters, rwsr;

	if (!filename)
		return (-1);
	fr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fr == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (noletters = 0; text_content[noletters]; noletters++)
		;
	rwsr = write(fr, text_content, noletters);
	if (rwsr == -1)
		return (-1);
	close(fr);
	return (1);
}
