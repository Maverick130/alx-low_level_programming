#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @int: holds variabl@int: holds variablee
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
