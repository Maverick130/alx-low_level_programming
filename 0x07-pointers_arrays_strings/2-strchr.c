#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 *
 * @s: first variable
 * @c: second variable
 *
 * Return: no return value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
