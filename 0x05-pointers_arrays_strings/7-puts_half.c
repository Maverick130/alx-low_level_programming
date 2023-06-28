#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string indentifier
 * Return: 0 success
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

