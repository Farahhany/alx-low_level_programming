#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description:Chech n  positive or negative
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative", n);
	else if (n == 0)
		printf("%i is zero", n);
	else
		printf("%i is positive", n);
	return (0);
}
