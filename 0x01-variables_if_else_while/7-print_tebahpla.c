#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char rvalphabet;

	for (rvalphabet = 'z'; rvalphabet >= 'a'; rvalphabet--)
		putchar(rvalphabet);
	putchar('\n');
	return (0);
}
