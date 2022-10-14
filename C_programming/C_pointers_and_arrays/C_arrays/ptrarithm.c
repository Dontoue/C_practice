#include <stdio.h>

/**
 * main - illustrates pointer arthmetic.
 *
 * Return:no return.
 */
int main(void)
{
	int a[5];

	*a = 98;
	*(a + 1)  = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of 'a[0]'(which is also the value of 'a' is: %d\n", *a);
	printf("Value of 'a[1]' is: %d\n", *(a + 1));
	printf("Value of 'a[2]' is %d\n", *(a + 2));
	printf("Valie of 'a[3]' is %d\n", *(a + 3));
	printf("Value of 'a[4]' si %d\n", *(a + 4));

	printf("----------------------------------\n");
	printf("Address of 'a[0]' also address of 'a' is %p\n", &a);

	printf("Address of 'a[1]' is: %p\n", (a + 1));
	printf("Address of 'a[1]' is %p\n", &(*(a + 1)));
}	
