#include <stdio.h>

/**
 * main -illustrates pointer arithmetic.
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;
	int n;
	int a[5];

	p = &n;
	printf("p = &n\n p: %p\n", p);
	printf("p + 1: %p\n", p + 1);
	printf("p + 2: %p\n", p + 2);
	printf("p + 10: %p\n", p + 10);

	p = a;
	printf("p = a\n p: %p\n", p);
	printf("p + 1: %p\n", p + 1);
	printf("p + 2: %p\n", p + 2);

	return (0);
}
