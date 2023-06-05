#include <stdlib.h>
#include <stdio.h>

/**
 * before_main - funtion that print before main function
 * Return: void
 */
void before_main(void)__attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
