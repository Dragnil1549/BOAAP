#include <iostream>
#include <stdio.h>
void main()
{
	double v, s = 5.2, j = 10.4 * pow(10, 4), x = 6;
	while (x <= 5)
	{
		if (2 * s > x* j)
			v = cos(j * x);
		else if (2 * s < x * j)
			v = 2 * tan(j * x);
		else
			v = 5 - exp(x/2);
		printf("x=%f\t", x);
		printf("y=%5.2f\n", v);
		x = x + 1;
	}
}
