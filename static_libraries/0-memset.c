#include "main.h"

/**
 * _memset - a certain value is filled with a block of memory by the program
 * @s:it starts the memory address that will be filled up
 * @b:it is the value desired
 * @n:it indicates number of bytes that will be changed
 *
 * Return: replace a new value in array for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}	return (s);
}
