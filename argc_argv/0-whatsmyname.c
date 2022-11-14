#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: Number of arguments passed to the programm
 * @argv: Array of strings
 *
 * Return: Always 0 (succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

