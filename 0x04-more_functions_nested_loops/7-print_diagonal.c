#include "main.h"
/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 * Return: Always void
 */
void print_diagonal(int n)
{
	int l, p;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (p = 0; p < l; s++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (l != n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
