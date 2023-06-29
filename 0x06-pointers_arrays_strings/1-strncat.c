#include "main.h"
#include <stdio.h>
/**
 * *_strncat - it concatenates two strings
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 *
 * Return: 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; j < n && src[j] != '\0'; j++)
			dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
