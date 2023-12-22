#include "main.h"

/**
 * erro_file - check if a file is open
 * @file_from: initial file to copy from
 * @file_to: destination file to copy to
 * @argv: arguement vector
 * Return: nothing
 */

void erro_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy file contnt
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nochars, nowr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	erro_file(file_from, file_to, argv);

	nochars = 1024;
	while (nochars == 1024)
	{
		nochars = read(file_from, buf, 1024);
		if (nochars == -1)
			erro_file(-1, 0, argv);
		nowr = write(file_to, buf, nochars);
		if (nowr == -1)
		erro_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fr %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fr %d\n", file_to);
		exit(100);
	}
	return (0);
}
