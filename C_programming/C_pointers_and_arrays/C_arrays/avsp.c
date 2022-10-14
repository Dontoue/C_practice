#include <stdio.h>
void f(int *a);
/**
 * main - illustrates an array is not a pointer but..
 *
 * Return : always 0.
 */
int main(void)
{
	int t[10];
	int *p;

	p = t;

	printf("Value of 't' is: %p\n", t);
	printf("Value of '&t[0]' is: %p\n", &t[0]);
	printf("Value of 'p' is: %p\n", p);
	f(t);

	return (0);
}
/**
 * f - prints value of a pointer of type int
 *
 * @a: address of an interger we need to print.
 *
 * Return: always 0.
 */
void f(int *a)
{
	printf("Value of 'a' is: %p\n", a);
	return;
}
