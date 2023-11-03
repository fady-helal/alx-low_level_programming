#include "main.h"
/**
 *  *  _puts - print a string following a new line 
 *   * @str : pointer to a string to print
 *    * return : void
*/
void _puts(*str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar(str);
}
_putchar('\n');
}

/**
 *  *  _atoi - convert a string to an integer 
 *   *  @s : char type string
 *    * Return : integer converted
 *    */
int _atoi(char *s)
{
unsigned int  res = 0;
int i = 0;
int sign = 1;

if (s[0] == '-')
{
sign = -1;
i++;
}
for (;s[i] != '\0' ; ++i)
{
res = res * 10 + s[i] - '0';
}
return (sign * res);
}

/**
 *  *  print_int : print an integer
 *   *  @n : int
 *    * Return : 0
 *    */
void print_int(unsigned long int n)
{
unsigned long int divisor = 1, i, resp;
for (i = 0 ; n / divisor > 9; i++ , divisor *=10)
;
for (; divisor >= 1 ; n %= divisor , divisor /= 10)
{
    resp = n / divisor;
        _putchar(resp + '0');
}
}

/**
 *  *  main- print the result of the multiplication, follow by a new line
 *   * @argc: int
 *    * @argv: list
 *     * Return : 0
 *     */
int main(int argc, const char *argv[])
{
(void)argc;
if (argc != 3)
{
    _puts("Error ");
        exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return(0);
}
