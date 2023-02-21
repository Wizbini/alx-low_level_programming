#include "main.h"

/**
 * main - Write a function that checks for alphabetic character.
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
