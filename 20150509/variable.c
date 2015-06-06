#include <stdio.h>
#define PI 3.14

int main()
{
	const double pi2 = 3.14 + 1;
	double c = pi2 * 2;
	printf("%f\n",c);
	c = PI + 1 * 3;
	printf("%f\n",c);
}
