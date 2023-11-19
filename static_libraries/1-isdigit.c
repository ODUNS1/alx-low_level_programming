#include "main.h"

/**
 * _isdigit -this checks a digit from 0 through to less than or equals to 9
 * @c: check for int
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
