#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @s: variable
 * Return: no return value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
