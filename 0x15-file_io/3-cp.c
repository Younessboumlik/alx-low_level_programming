#define BUFFER_SIZE 1024

void close_file(int fd, char *file);

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 * @file: The name of the file associated with the file descriptor.
 */
void close_file(int fd, char *file)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: argument count.
 * @argv: argument values.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}


	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(from_fd, argv[1]);
		exit(99);
	}


	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from_fd, argv[1]);
			close_file(to_fd, argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(from_fd, argv[1]);
		close_file(to_fd, argv[2]);
		exit(98);
	}
	close_file(from_fd, argv[1]);
	close_file(to_fd, argv[2]);
				
	return (0);
}
