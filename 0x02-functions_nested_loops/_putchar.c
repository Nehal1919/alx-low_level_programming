#inculde "main.h"
#inculde <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approperiately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
