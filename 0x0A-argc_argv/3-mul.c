#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Gives product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if incorrect, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);


}
