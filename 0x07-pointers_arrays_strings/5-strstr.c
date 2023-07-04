#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * *_strstr - locates a substring
 *
 * @haystack: variable
 * @needle: second variable
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int needlelen = strlen(needle);

	for (p = (char *)haystack; *p != '\0'; p++)
	{
		if (strncmp(p, needle, needlelen) == 0)
			return (p);
	}
	return (NULL);
}
