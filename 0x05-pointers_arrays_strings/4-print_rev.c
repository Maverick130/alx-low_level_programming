#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: first variable
 * Return: always 0
 */
void print_rev(char *s)
{
	int len= 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}

