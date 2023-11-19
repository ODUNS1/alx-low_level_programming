#include "main.h"
/**
 * _strstr - it is a function of an entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *v = needle;
			while (*u == *v && *v != '\0')
			{
				u++;
				v++;
			}
			if (*v == '\0')
				return (haystack);
	}
	return (0);
}
