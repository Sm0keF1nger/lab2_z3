#include <stdio.h>
#include <math.h>

int main()
{

	int a, b;
	double x;
	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	x = (2 * cos(a) - pow(b, 2)) / (3 * (pow(a, 2) - 3 * b));

	printf("x = 2cos(a) - b^2 / 3(a^2 - 3b)\n x = %.2lf\n", x);
}
