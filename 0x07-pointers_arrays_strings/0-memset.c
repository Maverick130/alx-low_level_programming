#include "main.h"
/**
 * *_memset - write a function with constant byte
 *
 * @s: first variable
 * @b: second variable
 * @n: third variable
 *
 * Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
