#include "main.h"
/**
  * _strlen_recursion- function that returns the length of a string
  * @s: pointer to a String
  * Return: return int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * create_file - function that creates a file.
  * @filename: ...
  * @text_content: the text to fill the file.
  * Return: 1 on success, -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
