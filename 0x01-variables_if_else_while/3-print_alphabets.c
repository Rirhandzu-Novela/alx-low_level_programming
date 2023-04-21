#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0
 */
int main(void)
{
	char alphABET;

	for (alphABET = 'a'; alphABET <= 'z'; alphABET++)
		putchar(alphABET);
	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
		putchar(alphABET);
	putchar('\n');
	return (0);
}
