#include "pch.h"
#include "windows.h"
#include "math.h" 
#include "iostream" 
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
	double x, a, b, c, D, E, N;
	printf("Input x\n x=");
	scanf_s("%lf", &x);
	printf("Input a\n a=");
	scanf_s("%lf", &a);
	printf("Input b\n b=");
	scanf_s("%lf", &b);
	printf("Input c\n c=");
	scanf_s("%lf", &c);


	if (x < 0)
		if (b != 0) {
			D = -a * pow(x, 2) + b;
			printf("D=%f\n", D);
		}
		else if (x > 0)
			if (b = 0) {
				E = x / (x - c) + 5.5;
				printf("E=%f\n", E);
			}
			else if (-c != 0)
			{
				N = x / -c;
				printf("N=%f\n", N);
			}
			else
			{
				printf("Error\n");
			}
	system("pause");
	return 0;
}


