#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - entry point
 * @filename: const char variable
 * @text_content: char variable
 *
 * Return: int variable
*/

int create_file(const char *filename, char *text_content)
{
	int i = 0, fp, cantW;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	cantW = write(fp, text_content, i);
	if (cantW == -1)
		return (-1);
	if (close(fp) == -1)
		return (0);
	return (1);
}
