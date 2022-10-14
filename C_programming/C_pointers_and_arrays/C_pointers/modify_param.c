#include <stdio.h>
/**
 * modify_param - set interger to 402.
 * @m: value to be modified.
 *
 * Return: Always 0.
 */
void modify_param(int *m)
{
	*m = 402;
	printf("Value of 'm' is: %p\n", m);
	printf("Address of 'm' is: %p\n", &m);
}
/**
 * main - modifies an interger value from outside a
 * function it is declared.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 48;
	p = &n;

	printf("Values of 'n' before the call is: %d\n", n);
	printf("Address of 'n' is: %p\n", &n);
	printf("Address of '*p' is: %p\n", &*p);
	printf("Address of 'p' is: %p\n", &p);
	printf("Value of 'p' is %p\n", p);
	modify_param(p);
	printf("Value of 'n' after the call is:%d\n", n);

	return (0);
}

