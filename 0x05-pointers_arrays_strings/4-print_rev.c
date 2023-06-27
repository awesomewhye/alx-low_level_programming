#include "main.h"

/**
  * print_rev - a function that print string in reverse,
  * followed by a new line.
  * @s: a character
  */
void print_rev(char *s)
{
	int str = 0;

	while (s[str])
	{
		str++;
	}
	while (str--)
	{
		_putchar(s[str]);
	}
	_putchar('\n');
}
