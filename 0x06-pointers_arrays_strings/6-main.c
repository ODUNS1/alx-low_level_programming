#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. \nhello 0123456 world\thello. hello world\n";
	char *ptr;

		ptr = cap_string(str);
		printf("%s", ptr);
		printf("%s", str);
		return (0);
}
