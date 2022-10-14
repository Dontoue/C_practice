#include <stdio.h>
/**
 * main - accessing a variables through its pointer
 *
 * Return: no return.
 */
int main(void)
{
	int x, y;
	int *ptr;

	x = 10;
	ptr = &x;
	y = *ptr;

	printf("Values of x is %d\n\n", x);
	printf("%d is stored at addr %p\n", x, &x);
	printf("%d is stored at addr %p\n", *&x, &x);
	printf("%d is stored at addr %p\n", *ptr, ptr);
	printf("%p is stored at addr %p\n", ptr, &ptr);
	printf("%d is stored at addr %p\n", y, &y);
	*ptr = 25;
	printf("\nNow x = %d\n", x);
}
