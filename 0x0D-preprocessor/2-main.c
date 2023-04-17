#include <stdio.h>
/**
 * main - Prints the name of source file copied from.
 * Desc: Prints the name of source file copied from
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
