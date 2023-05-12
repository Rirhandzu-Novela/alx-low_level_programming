#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int s;

	s = 0;

	if (*s)
	{
		s++;
		s = _strlen_recursion(s + 1) + 1;
	}
	return (s)
}
