#include <stdio.h>
/**
 * main - stores address of a variable into a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 48;
	p = &n;

	printf("Address of 'n' is %p\n", &n);
	printf("Values of 'p' is %p\n", p);
	return (0);
}
