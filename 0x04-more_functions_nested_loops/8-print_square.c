#include "main.h"
/**
 * print_square - Draw a square in the terminal
 * @size: The size of the square
 * Return: Always void
 */
void print_square(int s)
{
	int l, w;

	if (s > 0)
	{
		for (l = 0; l < s; l++)
		{
			for (w = 0; w < s; w++)
			{
				_putchar('#');
			}

			if (l != s - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
