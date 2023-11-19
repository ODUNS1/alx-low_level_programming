#include "main.h"
/**
 * _strlen - its a function that returns the string's length
 * @s: representing string
 * Return: length
 */
int _strlen(char *s)
{
	int longx = 0;
		while (*s != '\0')
		{
			longx++;
			s++;
		}
		return (longx);
}
