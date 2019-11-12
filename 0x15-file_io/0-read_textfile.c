#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - entry point
 * @filename: const char variable
 * @letters: size_t variable
 *
 * Return: ssize_t variable
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, cantR, cantW;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	cantR = read(fp, buffer, letters);
	if (cantR == -1)
	{
		free(buffer);
		return (0);
	}
	cantW = write(STDOUT_FILENO, buffer, (unsigned int)cantR);
	if (cantW == -1 || cantW != cantR)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	if (close(fp) == -1)
		return (0);
	return (cantW);
}
