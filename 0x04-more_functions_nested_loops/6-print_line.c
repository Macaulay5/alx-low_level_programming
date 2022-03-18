#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * print_line - prints a line with the length being the input
 * @n: the length of the line
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
	int i;

	for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	for (i = 0; i < n; ++i)
		_putchar('_');
	_putchar('\n');
}
