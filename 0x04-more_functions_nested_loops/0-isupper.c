#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int main(void)
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	  c = 'a';
	  printf("%c: %d\n", c, _isupper(c));
	  return (0);
	  return (c >= 'A' && c <= 'Z');
}
