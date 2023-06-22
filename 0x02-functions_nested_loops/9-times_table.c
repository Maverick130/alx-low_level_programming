#include "main.h"
/**
 * main - main entry
 *
 * times_table: print 9 times table
 * @i: integer variable
 * Return: no return value
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar('9');
		_putchar(' ');
		_putchar('*');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		int result = 9 * i;

		if (result < 10)
		{
			_putchar(' ');
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
