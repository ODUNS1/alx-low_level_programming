#include "main.h"

/**
 * _strncat - it is a function that joins strings together
 * the use of most n bytes from src
 * @dest: the value being entered
 * @src: the value being entered
 * @n: the value being entered
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
		i = 0;
		while (dest[i] != '\0')
		{
			i++;
		}
		j = 0;
			while (j < n && src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
			return (dest);
}
