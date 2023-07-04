#include "main.h"
/**
 * _strspn - print the lenght of a prefix
 * @s: variable
 * @accept: variable
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *p = accept;

		while (*p && (*s != *p))
			p++;
		if (*p == '0')
			break;
		count++;
		s++;
	}
	return (count);
}
