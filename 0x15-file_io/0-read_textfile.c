#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: pointer to the name of the file.
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount
 * of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor;
	ssize_t read_success, write_success;
	char *buffer;

	/* validacion del filename */
	if (filename == NULL)
		return (0);

	/* validacion del buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* validacion del file descriptor */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* validacion de lectura correcta */
	read_success = read(file_descriptor, buffer, letters);
	if (read_success == -1)
		return (0);

	/* validacion escritura correcta */
	write_success = write(STDOUT_FILENO, buffer, letters);
	if (write_success == -1)
		return (0);

	free(buffer);
	return (read_success);
}
