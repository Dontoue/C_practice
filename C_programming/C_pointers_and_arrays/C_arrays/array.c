#include <stdio.h>
/**
 * main - accesses different elements of the array
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[3];

	a[0] = 98;	
	a[1] = 198;
	a[2] = 298;

	printf("Value of a[0] is: %d\n", a[0]);
	printf("Value of a[1] is: %d\n", a[1]);
	printf("Value of a[2] is: %d\n", a[2]);

	printf("Address of a[0] is: %p\n", &a[0]);
	printf("Address of a[1] is: %p\n", &a[1]);
	printf("Address of a[2] is: %p\n", &a[2]);

	return (0);
}
