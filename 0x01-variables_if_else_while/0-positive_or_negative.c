#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n == 0) /*test if n is zero*/
		printf("is zero");
	else if (n > 0)
		printf("is positive"); /*Test if n is postive*/
	else
		printf("is negative"); /*Test if negetive*/
	printf("\n");
	return (0);
}
