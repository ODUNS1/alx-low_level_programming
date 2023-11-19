#include "main.h"

/**
 * _isalpha - the function checks for character that is alphabet
 * @c: its the character that will be checked
 * Return: 1 if the value of c is a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
