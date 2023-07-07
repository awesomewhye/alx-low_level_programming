#include "main.h"

/**
  * _strlen - a function that returns the length of a string
  * @s: a character
  * Return: length.
  */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
