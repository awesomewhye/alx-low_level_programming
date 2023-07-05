#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: an integer
 * @i: square root
 * Return: the square root of the number
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function that returns the natural 
 * square root of a number
 * @n: an integer
 * @i: square root
 * Return: the square root of the number
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (square(n, i + 1));
	}
}
