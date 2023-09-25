#include "main.h"
/**
 * _strchr - return first occurance of char c in char *s
 * @s: pointer to string array
 * @c: letter
 * Return: pointer to first occurance or NULL if there is not
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0 ; s[i] != '\0' ; i++)
{
if (c == s[i])
return (s + i);
}
if (s[i] == c)
return (s + i); /*this line mean even the char is '\0' return the pointer*/
return (NULL);
}
