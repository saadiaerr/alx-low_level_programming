#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int open_file1, open_file2, _r, close_file1, close_file2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	open_file1 = open(argv[1], O_RDONLY);
	if (open_file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_r = read(open_file1, buffer, 1024)) > 0)
	{
		if (open_file2 < 0 || (write(open_file2, buffer, _r) != _r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file1 = close(open_file1);
	if (close_file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", open_file1), exit(100);
	}
	close_file2 = close(open_file2);
	if (close_file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", open_file2), exit(100);
	}
	return (0);
}
