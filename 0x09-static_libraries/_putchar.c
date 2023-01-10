#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the character to print
 * Return: success 1
 * error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
