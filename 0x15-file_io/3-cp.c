#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: int variable
 * @av: char variable
 *
 * Return: always 0
*/

int main(int ac, char **av)
{
	int fF, fT, cantR;
	char *buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fF = open(av[1], O_RDONLY, 0600);

	if (fF == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fT = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fT == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((cantR = read(fF, buffer, 1024)) > 0)
		if (write(fT, buffer, cantR) < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	if (cantR == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(fF) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fF), exit(100);
	if (close(fT) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fT), exit(100);

	return (0);
}
