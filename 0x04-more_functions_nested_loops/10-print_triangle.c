#include "main.h"
/**
 * print_triangle - Draw a triangle in the terminal
 * @size: The size of the triangle
 * Return: Always void
 */
void print_triangle(int s)
{
	int l, p, h;

	if (s > 0)
	{
		for (l = 1; l <= s; l++)
		{
			for (p = 0; p < s - l; s++)
			{
				_putchar(' ');
			}

			for (h = 0; h < l; h++)
			{
				_putchar('#');
			}

			if (l != s)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
