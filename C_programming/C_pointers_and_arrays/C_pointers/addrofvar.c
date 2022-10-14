#include <stdio.h>
/**
 * main - function finds address of a variable.
 *
 * Return: no return value.
 */
int main(void)
{
	int n;
	char c;

	printf("Address of 'n' is: %p\n", &n);
	printf("Address of 'c' is: %p\n", &c);

	return (0);
}
