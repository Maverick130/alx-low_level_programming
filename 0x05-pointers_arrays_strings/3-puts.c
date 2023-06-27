#include "main.h"
#include <stdio.h>
/**
 * _puts - prints new line
 * @str: variable declearation
 * Return: 0 success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
