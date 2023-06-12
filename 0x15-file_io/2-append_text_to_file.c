#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int _open, _write, text_lentgh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_lentgh])
			text_lentgh++;
	}

	_open = open(filename, O_WRONLY | O_APPEND);
	_write = write(_open, text_content, text_lentgh);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);

}
