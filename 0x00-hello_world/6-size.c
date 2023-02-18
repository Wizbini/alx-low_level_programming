#include <stdio.h>
/**
 * main - A program that prints exactly with proper grammar,.
 * Return: 0 (success)
 */
int main(void)
{
	long long int a;

	printf("size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %i byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a float: %i byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
