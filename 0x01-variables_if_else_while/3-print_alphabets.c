#include <stdio.h>
/**
 * main - Print the alphabet in lowercase and upper case.
 * Return: Always 0 (succed).
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
