#include "main.h"
/**
  * _isdigit - the function checks for a digit.
  *
  * @c: it is a char on the ASCII table.
  *
  * Returns: 1 if c is a digit, 0 otherwise.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
