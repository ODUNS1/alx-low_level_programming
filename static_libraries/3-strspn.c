#include "main.h"
/**
 * _strspn -its a function for entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int p;
		while (*s)
		{
			for (p = 0; accept[p]; p++)
			{
				if (*s == accept[p])
				{
					n++;
					break;
				}
				else if (accept[p + 1] == '\0')
				return (n);
			}
			s++;
		}
		return (n);
}
