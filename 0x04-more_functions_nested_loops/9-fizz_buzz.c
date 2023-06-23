#include <stdio.h>

/**
  * main - Entry point.
  * description - Write a program that prints the numbers from 1 to 100
  * followed by a new line.
  * Return: 0
  */
int main(void)
{
	int test;

	for (test = 1; test <= 100; test++)
	{
		if ((test % 15) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((test % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((test % 3) == 0)
		{
			printf(" Fizz");
		}
		else if (test == 1)
		{
			printf("%d", test);
		}
		else
		{
			printf(" %d", test);
		}
	}
	printf("\n");

	return (0);
}
