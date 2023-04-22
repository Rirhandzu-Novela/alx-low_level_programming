#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Return: Always 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
