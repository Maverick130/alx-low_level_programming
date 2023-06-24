#include "main.h"
/**
 * print_square - print squre in the terminal
 *
 * @size: holdes variable
 *
 * return: no return value
 */
void print_square(int size)
{
	int b, f;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (b = 0; b < size; b++)
	{
		for (f = 0; f < (size); f++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
