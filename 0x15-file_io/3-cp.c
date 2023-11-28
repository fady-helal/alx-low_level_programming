#include"main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s \n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program.
 * @argc:argument count.
 * @argv:argument vector.
 * Return : 1 on succes 0 on failure.
*/
int main(int argc ,char *argv[])
{
int bytes_read,bytes_write, fd, ft;
char buf[READ_BUF];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[0]);
exit(98);
}

ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (ft == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd);
exit(99);
}

while ((bytes_read = read(fd, buf, READ_BUF)) > 0)
{
bytes_write = write(ft, buf, bytes_read);
if (bytes_write != bytes_read)
{
dprintf(2, "Error: Can't write to %s\n", argv[1]);
close(fd);
close(ft);
exit(99);
}
}


if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}

if (close(ft) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", ft);
exit(100);
}


return (0);

}