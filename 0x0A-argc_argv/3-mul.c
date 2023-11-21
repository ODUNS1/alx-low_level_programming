#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is to multiplies two numbers
 * @argc: it indicates number of commandline arguments
 * @argv: array that has of arguments
 *
 * Return: when 0 Successful, else Error if 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
