#include <stdio.h>
/**
  * main - main entry
  * Return: 0 success
  */
int main(void)
{
/* declaring variable f*/
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f == 'q' || f == 'e')
		{
			continue;
		}
		putchar(f);
	}
/* including new line after the code*/
	putchar('\n');
	return (0);

}
