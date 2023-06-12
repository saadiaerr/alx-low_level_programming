#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: name of the file
 * @letters: the number of letters
 * Return: actual number of letters it might read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int _o, _r, _w;
	register char *buf = malloc(sizeof(char)  * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	_o = open(filename, O_RDONLY);
	_r = read(_o, buf, letters);
	_w = write(STDOUT_FILENO, buf, _r);

	if (_o == -1 || _r == -1 || _w == -1 || !(_w == _r))
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(_o);
	return (_w);
}
