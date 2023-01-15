#include <stdio.h>
int  main()
{
	int product, x, y ,*p_x, *p_y;
	x = 5; y = 6;

	p_x = &x;
	p_y = &y;
	*p_x = 5; *p_y = 6;
	product = x*y;
	*p_x = product;
	printf("5 * %d = %d\n", y, *p_x);
	return 0;
}
