#include <stdio.h>

/**
 * main - using sizeof to dynamically determine sizeof
 * type char
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	printf("Sizeof int in my computer is: %u bytes\n", sizeof(int));
	printf("Sizeof char in my computer is: %u byte\n", sizeof(char));
	printf("Sizeof float in my computer is: %u bytes\n", sizeof(float));
	printf("Sizeof varibles n on my computer is: %u bytes\n", sizeof(n));

	return (0);
}
