#include "main.h"
/**
 * more_numbers - prints 10times 0 to 14
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	int b, c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('b');
			_putchar(c % 10 * '0');
		}
		_putchar('\n');
	}
}
