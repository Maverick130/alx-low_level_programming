#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - main entry
  * Return: 0 success
  */
int main(void)
{
/* declarin variable*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than6 and not 0", n, last_num);
	}

	return (0);
}
