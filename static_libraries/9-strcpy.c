#include "main.h"

/**
 * char *_strcpy - it is a function that copies the string pointed by src
 * @dest: it denotes copy to
 * @src: it denotes copy from
 *
 * Return: it will return string value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
		while (*(src + i) != '\0')
		{
			i++;
		}
		for ( ; j < i ; j++)
		{
			dest[j] = src[j];
		}
		dest[i] = '\0';
		return (dest);
}
