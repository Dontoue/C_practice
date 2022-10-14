#include <stdio.h>
/**
 * main - prints size and address of array.
 *
 * Return: Always 0.
 */
int main(void)
{
	char b[98];

	printf("Sizeof (b) is: %u\n", sizeof(b));
	printf("Sizeof (&b) is: %u\n", sizeof(&b));
	printf("Value of 'b' is %p\n", b);
	printf("Value of '&b' is %p\n", &b);

	return (0);
}
