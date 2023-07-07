#include "main.h"
/**
  * _isupper - a function that checks for uppercase chracter.
  *
  * @c: is a character on the ASCII table.
  *
  * Return: 1 if is is an uppercase charcter, 0 otherwise.
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
