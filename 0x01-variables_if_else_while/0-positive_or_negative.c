#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main-mainentry
*
*Return:0success
*/
int main(void)
{
/*declaring a variable*/
	int n;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if  (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);

}