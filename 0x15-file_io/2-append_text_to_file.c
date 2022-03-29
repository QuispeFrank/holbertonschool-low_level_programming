#include "main.h"

/**
  * _strlen_recursion - function that returns the length of a string
  * @s: pointer to a String.
  *
  * Return: return int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
  * append_text_to_file - a function that appends text at the
  * end of a file.
  *
  * @filename: a pointer to the name of the file.
  * @text_content: the text to fill the file.
  *
  * Return: 1 on success, -1 on failure.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		size = _strlen_recursion(text_content);
		wr = write(fd, text_content, size);
		if (wr == -1)
			return (-1);
	}
	return (1);
}
