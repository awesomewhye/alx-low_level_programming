#include "main.h"
/**
  * _abs - computes the absolute value of an integer.
  *
  * @n: an integer of and absolute value
  *
  * Return: Always 0.
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
