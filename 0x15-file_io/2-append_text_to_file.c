#include"main.h"
/*
 * _strlen - return length of string.
 * @s:string whose check.
 * Return: length of string.
*/
int _strlen(char *s)
{
int len;
if (s == 0)
return (0);
for (len = 0 ; s[len] != '\0' ; len++)
;
return (len);
}

/**
 * create_file - create a file.
 * @filename:name of file will be create.
 * @text_content:text will be write.
 * Return : 1 on success 0 on failure.s
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes;
ssize_t len = _strlen(text_content);
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (len)
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
