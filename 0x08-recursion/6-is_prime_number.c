#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * @i: integer
 * Return: 1 or 0
 */
int checkprime(int n, int i);
int is_prime_number(int n)
{
	return (checkprime(n, 2));
}

/**
 * checkprime - returns 1 if the input integer is a     prime number
 * @n: integer
 * @i: integer
 * Return: 1 or 0
 */
int checkprime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (checkprime(n, i + 1));
	}
}
