#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments in commandline
 * @argv: array that has arguments of commandline
 * Return: when successful, then 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
					}
	return (0);
}
