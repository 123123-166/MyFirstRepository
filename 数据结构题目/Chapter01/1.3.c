#include<stdio.h>
/* 实现幂运算 */
double pow(double X, int n);

int main(void)
{
	double ret = pow(2, -1);
	printf("%lf\n", ret);
	getchar();

	return 0;
}

//时间复杂度为O(logN)
double pow(double X, int n)
{
	if (n == 0)
		return 1;

	if (n == 1)
		return X;

	if (n > 0)
	{
		if (n % 2 == 0)
			return pow(X * X, n / 2);
		else
			return pow(X * X, n / 2) * X;
	}
	else
	{
		int tmp = -n;
		if (n % 2 == 0)
			return 1 / pow(X * X, n / 2);
		else
			return 1 / (pow(X * X, n / 2) * X);
	}
}