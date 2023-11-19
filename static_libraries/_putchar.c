#include <unistd.h>

/**
 * _putchar - this function writes the character c to stdout
 * @c: This is the character to print
 *
 * Return: On success 1.
 * On error, returns -1, and errno will be set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
