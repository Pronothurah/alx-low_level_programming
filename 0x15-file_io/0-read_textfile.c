#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of file
 * @letters: number of byutes to read
 *
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_data;
	ssize_t bytes;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);

	bytes = read(file_data, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file_data);

	return (bytes);
}
