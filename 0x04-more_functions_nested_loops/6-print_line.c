#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times
 * Return: no return value
 */
void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
