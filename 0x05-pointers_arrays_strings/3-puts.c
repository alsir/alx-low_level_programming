#include "main.h"
/**
 * _puts - Print a string, followed by a new line, to stdout
 * @str: the string to be printed
 * Return:void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
