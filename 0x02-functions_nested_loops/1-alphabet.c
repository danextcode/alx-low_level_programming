#include "main.h"

/**
 * print_alphabet - print function
 * Description: print the alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char ck;

	for (ck = 'a'; ck <= 'z'; ++ck)
		_putchar(ck);
	_putchar('\n');
}
