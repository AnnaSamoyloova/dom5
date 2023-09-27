#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
const double x = 0.03981;
const double y = -1625;
const double z = 0.512;
double a;

double name(double x, double y, double z)
{
	double res1 = pow(2, -x);
	double res2 = fabs(y);
	double res3 = pow(res2, 1. / 4);
	double res4 = res3 + x;
	double res5 = pow(res4, 1. / 2);
	double res6 = 1 / sin(z);
	double res7 = x - res6;
	double res8 = exp(res7);
	double res9 = pow(res8, 1. / 3);
	a = res1 * res5 * res9;
	return(a);
}

int main(void)
{
	setlocale(LC_ALL, "RUS");
	a = name(x, y, z);
	printf("Значение выражения равно %lf /n", a);
	system("pause");
	return 0;
}
