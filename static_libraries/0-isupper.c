#include "main.h"
/**
 * _isupper - check letters with uppercase
 * @c: contains the char to check
 *
 * Return: if char is upper return 1, else should return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
