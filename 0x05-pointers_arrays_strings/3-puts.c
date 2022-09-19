#include "main.h"

/**
*_puts - prints a a string to standard output
*@str: the string to printed
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
