#include <stdio.h>
/**
 * main - dereferencing.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 48;
	p = &n;

	printf("Value of 'n' is: %d\n", n);
	printf("Address of 'n' is: %p\n", &n);
	printf("Value of 'p' is: %p\n", p);

	*p = 402;
	printf("Values of 'n' is %d\n", n);
	printf("Address of 'n' is %p\n", &n);
	printf("Value of 'p' is %p\n", p);
	return (0);
}
