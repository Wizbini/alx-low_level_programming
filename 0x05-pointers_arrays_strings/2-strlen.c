#include "main.h"
/**
 * _strlen - find legnth of a string
 * @s: pointer to the string to check
 * Return: void
 */
int _strlen(charn *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
