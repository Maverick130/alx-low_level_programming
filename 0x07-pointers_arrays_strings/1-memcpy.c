#include "main.h"
/**
 * *_memcpy - copies meamory area
 *
 * @dest: fisrt variable
 * @src: second variable
 * @n: third variable
 * Return: none
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
