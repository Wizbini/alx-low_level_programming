#include "main.h"
/**
 * _evaluate - Evaluate function sqrt
 * @i: integer
 * @n: interger
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (1);
	return (-1);
	return (-1);
}
/**
 * *_sqrt_recursion - evaluate sqrt
 * _evaluate - Evaluate function sqrt
 * *@n: interger
 * *Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0

	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}