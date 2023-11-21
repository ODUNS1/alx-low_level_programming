#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - to sum numbers that are positive
 * @argc: shows the number of argument of commandline
 * @argv: its an array of arguments of commandline
 * Return: its 0 when successful
 */
int main(int argc, char *argv[])
{
	int c;
	int d;
	int sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (!isdigit(argv[c][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
