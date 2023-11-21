#include <stdio.h>

/**
 * main - this will print the program's name followed by newline
 *
 * @argc: denotes number of commandline arguments
 *
 * @argv: defines the array of the arguments
 *
 * Return: if successful then (0)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
