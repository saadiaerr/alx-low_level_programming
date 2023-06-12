#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	register int _f, _w, text_l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	_f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (_f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[text_l])
		{
			text_l++;
		}
		_w = write(_f, text_content, text_l);
		if (_w == -1)
		{
			return (-1);
		}
	}
	close(_f);
	return (1);
}
