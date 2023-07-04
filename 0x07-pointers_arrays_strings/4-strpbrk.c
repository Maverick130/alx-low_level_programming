#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for string for any of a set of bytes
 *
 * @s: first variable
 * @accept: second variable
 *
 * Return: a pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	  char *p;

	for (p = s; *p != '\0'; p++)/* calling for loop*/
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *p)
				return (p);
			a++;
		}
	}
	return (NULL);
}
