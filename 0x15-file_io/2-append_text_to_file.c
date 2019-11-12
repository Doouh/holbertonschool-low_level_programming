#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - entry point
 * @filename: const char variable
 * @text_content: char variable
 *
 * Return: int variable
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fp, cantW;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;

	fp = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fp == -1)
		return (-1);
	cantW = write(fp, text_content, i);
	if (cantW == -1)
		return (-1);
	if (close(fp) == -1)
		return (0);
	return (1);
}
