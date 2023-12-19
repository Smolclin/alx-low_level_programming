#include "main.h"

/**
 * read_textfile - function that reads a textfile
 * and prints it
 * @filename: pointer to the file name
 * @letters: the letters to be written
 * Return: the printed file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t nord, norw;
	char *buf;

	if (!filename)
		return (0);
	fr = open(filename, O_RDONLY);

	if (fr == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	nord = read(fr, buf, letters);
	norw = write(STDOUT_FILENO, buf, nord);

	close(fr);
	free(buf);

	return (norw);
}
