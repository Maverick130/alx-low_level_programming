#include <stdio.h>
/**
  * main - main entr
  * Return: 0 success
  */
int main(void)
{
	char upper = 'a';

	while (upper <= 'z')
	{
		putchar(upper);
		upper++;
	}
	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
