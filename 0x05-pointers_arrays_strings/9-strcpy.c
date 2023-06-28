#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the strings pointer
 * @dest: first variable
 * @src: second variable
 * Return: 0 succes
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
