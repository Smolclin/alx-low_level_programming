#include "main.h"

/**
 * append_text_to_file - function that appends text at
 * the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the content in the
 * file
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fr, noletters, wrt;

	if (!filename)
		return (-1);

	fr = open(filename, O_WRONLY | O_APPEND);

	if (fr == -1)
		return (-1);

	if (text_content)
	{
		for (noletters = 0; text_content[noletters]; noletters++)

		wrt = write(fr, text_content, noletters);
		if (wrt == -1)
			return (-1);
	}
	close(fr);

	return (1);
}
