#include "main.h"
/**
 * print_diagonal - function that draws adiagonal line on the terminal
 * @n: input unmber
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (co = 1; co <= n; co++)
	{
	for (sp = 1; sp < co; sp++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
