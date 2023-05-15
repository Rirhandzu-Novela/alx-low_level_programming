#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

/**
 * pali - check palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int pali(char *s)
{
	int c;

	c = _strlen_recursion(s) - 1;

	if (*s == s[c])
	{
		s++;
		c--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - function to check if strng is palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s)
	{
		return (1);
	}
	return (pali(s));
}

