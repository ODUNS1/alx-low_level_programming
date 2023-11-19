#include "main.h"
/**
 * _strchr - this is the point of entry
 * @s: this is an input
 * @c: also an input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	for (int x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
