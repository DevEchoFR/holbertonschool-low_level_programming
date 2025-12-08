#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * print_str_stderr - prints a string to the standard error
 * @s: string to print
 */
void print_str_stderr(const char *s)
{
	int len = 0;

	if (!s)
		return;
	while (s[len])
		len++;
	write(STDERR_FILENO, s, len);
}

/**
 * exit_with_error - prints an error message and exits
 * @msg: main error message
 * @file: filename or NULL
 * @code: exit status
 */
void exit_with_error(const char *msg, const char *file, int code)
{
	print_str_stderr(msg);
	if (file)
		print_str_stderr(file);
	print_str_stderr("\n");
	exit(code);
}

/**
 * print_number_stderr - prints an integer to the standard error
 * @n: number to print
 */
void print_number_stderr(int n)
{
	char buf[12];
	int i = 0;
	long num = n;

	if (num == 0)
	{
		write(STDERR_FILENO, "0", 1);
		return;
	}
	if (num < 0)
	{
		write(STDERR_FILENO, "-", 1);
		num = -num;
	}
	while (num > 0)
	{
		buf[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i--)
		write(STDERR_FILENO, &buf[i], 1);
}

/**
 * close_fd - closes a file descriptor and handles errors
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		print_str_stderr("Error: Can't close fd ");
		print_number_stderr(fd);
		print_str_stderr("\n");
		exit(100);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with various codes on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
		exit_with_error("Usage: cp file_from file_to", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error("Error: Can't read from file ", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_with_error("Error: Can't write to ", argv[2], 99);

	while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
			exit_with_error("Error: Can't write to ", argv[2], 99);
	}

	if (rd == -1)
		exit_with_error("Error: Can't read from file ", argv[1], 98);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
