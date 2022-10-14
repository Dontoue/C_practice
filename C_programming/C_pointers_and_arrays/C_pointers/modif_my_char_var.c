#include <stdio.h>
/**
 * modif_my_char_var - sets character values to 'o' and 'l'
 * @cc:character set to 'o'.
 * @ccc:character set to 'l'.
 *
 * Return - no return.
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';

	printf("Value of 'cc' is: %p\n", cc);
	printf("Address of 'cc' is: %p\n", &cc);
}
/**
 * main - modifies character from outside function it is
 * declared with using pointers.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *p;
	char c;

	p = &c;
	c = 'H';
	printf("Value of 'c' before call is: %c(%d)\n", c, c);
	printf("Address of 'c' is: %p\n", &c);
	printf("Value of 'p' is: %p\n", p);
	printf("Address of 'p' is: %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after the call is: %c(%d)\n", c, c);

	return (0);
}
