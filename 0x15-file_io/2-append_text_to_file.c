#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int _file, _w, text_lentgh = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	_file = open(filename, O_WRONLY, O_APPEND);
	if (_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[text_lentgh])
		{
			text_lentgh++;
		}
		_w = write(_file, text_content, text_lentgh);
		if (_w == -1)
		{
			return (-1);
		}
	}
	close(_file);
	return (1);
}
