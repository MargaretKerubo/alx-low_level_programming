/*
 * File: 4-print_rev.c
 * Auth: Marga Kerubo
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i = 0;
	int total_caracters = 0;
	int c = 0;

	while (s[i] != 0)
	{
		i++;
	}
	total_caracters = i - 1;

	for (c = 0; c <= total_caracters; c++)
		_putchar(s[total_caracters - c]);

	_putchar('\n');
}
