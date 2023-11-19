#include "main.h"
/**
 * _memcpy - its a type of function which role is to copy memory area
 * @dest: it is where the memory is stored
 * @src: it is where the memory is copied
 * @n: it indicates the number of bytes
 * Return: it copies memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = n;
		for (int g; g < h; g++)
		{
			dest[g] = src[g];
			n--;
		}
		return (dest);
}
