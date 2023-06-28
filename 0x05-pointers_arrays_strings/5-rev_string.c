#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverse a string
 *
 * @s: first variable
 * Return: 0 success
 */
void rev_string(char *s)
{
	int i = 0;
	int J = strlen(s) - 1;
	char temp;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
