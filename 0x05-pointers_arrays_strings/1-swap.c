#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a: holds variabl@int: holds variablee
 * @b: second variable
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
