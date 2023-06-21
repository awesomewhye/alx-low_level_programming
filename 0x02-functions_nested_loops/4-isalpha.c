#include "main.h"
/**
  * _isalpha - checks for uppercase and lowercase alphabeth characters.
  *
  * @c: is a character in the ASCII table.
  *
  * Return: 1 for lower and uppercase letters, 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
