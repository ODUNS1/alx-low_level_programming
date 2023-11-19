#include "main.h"

/**
 * _puts - its a function that prints string to stdout.
 * @str: the string that will be printed
 * _putchar will print a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
