#include <stdio.h>
/**
 * main - dereference pointer example with int and char
 * type.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	n = 48;
	p = &n;
	pp = &c;

	printf("Value of 'n' is: %d\n", n);
	printf("Address of 'n' is: %p\n", &n);
	printf("Value of 'p' is: %p\n", p);
	printf("Address of '*p' is: %p\n", &*p);
	printf("Address of 'p' is: %p\n", &p);
	printf("Values of 'c' is: %d (%c)\n", c, c);
	printf("Address of 'c' is: %p\n", &c);
	printf("Value of 'pp' is: %p\n", pp);

	*pp = 'o';
	*p = 402;
	printf("Value of 'c' is: %d (%c)\n", c, c);
	printf("Value of '*pp' is: %d\n", *pp);
	printf("Value of 'n' is: %d\n", n);
	printf("Value of '*p' is: %d\n", *p);

	return (0);
}
