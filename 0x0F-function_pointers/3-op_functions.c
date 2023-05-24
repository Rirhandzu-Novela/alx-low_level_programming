#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - a function that add two int
 * @a: int 1
 * @b: int 2
 * Return: sum of the two int
 */
int op_add(int a, int b)
{
    int c = 0;	
    c     = a + b;

    return c;
}

int op_sub(int a, int b)
{
    int c = 0;
    if ( a > b)
    {
       c = a - b;
    }
    else


