/*
 * File: 0-puts_recursion.c
 * Author: Yebung Danladi
 */

#include "main.h"

/**
 * _puts_recursion - Function that Prints a string, followed by new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)				/*Iterative condition*/
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
