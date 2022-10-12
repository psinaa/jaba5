#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI            3.14159265358979323846

void main()
{
	setlocale(LC_ALL, "RUS");
	//1

	float gr, r;
	printf("¬ведите значение градусов\n");
	scanf("%f", &gr);
	r = gr * M_PI / 180;
	printf("Cинус %.1f градусов = %.6f\n", gr, sin(r));

	//2
	double x = 2.7, y = 1.7576, a, b, k;
	int t = -6, l, A, B, C, j;
	a = log(x);
	b = sqrt((pow(x, 2) + pow(t, 2)));
	y = pow((fabs(a - b * x)), 1. / 5);
	printf("y = %lf\n", y);
	/*
		k = pow((fabs(log(x) - sqrt((pow(x, 2) + pow(t, 2))) * x)), 1. / 5);
		printf("k = %lf\n", k);
	*/

	//3
	A = (int)(a);
	B = (int)(b);
	C = (int)(y);
	l = ((A % 2) + (B % 2) % 2);
	printf("”словие выполнено  (1 - да, 0 - нет) %d\n", l);
	j = (int)(cos(A % 3 + B % 3 + C % 3));
	printf("”словие выполнено  (1 - да, 0 - нет) %d\n", j);
}